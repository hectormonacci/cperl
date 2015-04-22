/* XSLoader.c - XSLoader.pm converted to c, reusing DynaLoader code
 *
 * This was previously in dist/XSLoader as external module, but
 * maintained by p5p.
 * So far it's not a standalone .c file, it is included with
 * DynaLoader.c, dlboot.c, dlutils.c into one DynaLoader.o
 *
 * Copyright (C) 2015 cPanel Inc
 * Licensed under the same terms as Perl itself.
 */

/* A DynaLoader::bootstrap variant which takes the packagename name from caller() */
XS(XS_XSLoader_load) {
    dVAR; dXSARGS;
    HV *stash = CopSTASH(PL_curcop);
    SV *module = NULL, *file = NULL;
    char *modlibname = NULL;
    CV *bootc;
    AV *modparts;
    SV *modfname, *modpname, *boots;

    if (items < 1) {
        module = newSVpvn_flags(HvNAME(stash), HvNAMELEN(stash), HvNAMEUTF8(stash));
        modlibname = OutCopFILE(PL_curcop);
        DLDEBUG(2,PerlIO_printf(Perl_debug_log, "XSLoader::load from caller '%s', '%s'\n",
                HvNAME(stash), modlibname));
        if (strEQ(modlibname, "-e"))
            modlibname = NULL;
    }
    else {
        module = ST(0);
        DLDEBUG(2,PerlIO_printf(Perl_debug_log, "XSLoader::load '%s' %d args\n",
                SvPVX(module), items));
        if (!SvPOK(module))
            Perl_die(aTHX_ "Usage: XSLoader::load([ $packagename [,$VERSION]])\n");
    }

    boots = pv_copy(module);
    sv_catpvs(boots, "::bootstrap");
    if ((bootc = get_cv(SvPV_nolen_const(boots), 0))) {
        PUSHMARK(MARK); /* goto &$boots */
        PUTBACK;
        XSRETURN(call_sv(MUTABLE_SV(bootc), GIMME));
    }
    if (!modlibname) {
        modlibname = OutCopFILE(PL_curcop);
        if (memEQ(modlibname, "(eval ", strlen("(eval ")))
            modlibname = NULL;
    }
    if (!module) {
        PUSHMARK(MARK);
        PUTBACK;
        XSRETURN(call_pv("XSLoader::bootstrap_inherit", GIMME));
    }
    modparts = dl_split_modparts(aTHX_ module);
    modfname = AvARRAY(modparts)[AvFILLp(modparts)];
    modpname = dl_construct_modpname(aTHX_ modparts);
    DLDEBUG(3,PerlIO_printf(Perl_debug_log, "  modpname (%s) => '%s'\n",
            av_tostr(aTHX_ modparts), modlibname));
    file = modlibname ? newSVpvn(modlibname, strlen(modlibname)) : newSVpvs("");

    /* now step back @modparts+1 times: .../lib/Fcntl.pm => .../
       my $c = () = split(/::/,$caller,-1);
       $modlibname =~ s,[\\/][^\\/]+$,, while $c--;    # Q&D basename */
    if (items >= 1) {
        SV *caller = newSVpvn_flags(HvNAME(stash), HvNAMELEN(stash), HvNAMEUTF8(stash));
        modparts = dl_split_modparts(aTHX_ caller);
    }
    {
        SSize_t c = AvFILL(modparts) + 1;
        STRLEN  i = SvCUR(file);
        char   *s = SvPVX_mutable(file);
        s += i-1;
        for (; c>0 && *s; s--, i--) { /* XXX valgrind unitialized read by 1 */
            if (*s == '/' || *s == '\\') {
                c--;
                if (c==0) {
                    s[1] = 0;
                    SvCUR_set(file, i);
                    break;
                }
            }
        }
    }
    sv_catpv(file, "auto/");
    sv_catsv(file, modpname);
    sv_catpv(file, "/");
    sv_catsv(file, modfname);
    sv_catpv(file, DLEXT);

    /* Note: No dl_expand support with XSLoader */
    /* TODO no .bs support */
    if (fn_exists(SvPVX(file))) {
        DLDEBUG(3,PerlIO_printf(Perl_debug_log, "  found '%s'\n", SvPVX(file)));
    } else {
        DLDEBUG(3,PerlIO_printf(Perl_debug_log, "  not found '%s'\n", SvPVX(file)));
        if (items < 1) {
            PUSHMARK(SP);
            XPUSHs(module);
        } else {
            PUSHMARK(MARK);
        }
        PUTBACK;
        XSRETURN(call_pv("XSLoader::bootstrap_inherit", GIMME));
    }
    if ((items = dl_load_file(aTHX_ ax, file, module, GIMME))) {
        XSRETURN(items);
    } else {
        XSRETURN_UNDEF;
    }
}

XS(XS_XSLoader_load_file) {
    dVAR; dXSARGS;
    SV *file, *module;

    if (items < 2)
        die("Usage: XSLoader::load_file($module, $file)\n");
    module = ST(0);
    file = ST(1);

    if (fn_exists(SvPVX(file))) {
        DLDEBUG(3,PerlIO_printf(Perl_debug_log, "  found %s\n", SvPVX(file)));
    } else {
        die("Error: load_file $file not found\n");
    }
    if ((items = dl_load_file(aTHX_ ax, file, module, GIMME))) {
        XSRETURN(items);
    } else {
        XSRETURN_UNDEF;
    }
}

XS(XS_XSLoader_bootstrap_inherit) {
    dVAR; dXSARGS;

    DLDEBUG(2,PerlIO_printf(Perl_debug_log, "XSLoader::bootstrap_inherit '%s' %d args\n",
            SvPVX(ST(0)), items));
    if (items < 1 || !SvPOK(ST(0)))
        Perl_die(aTHX_ "Usage: XSLoader::bootstrap_inherit($packagename [,$VERSION])\n");
    PUSHMARK(MARK);
    PUTBACK;
    XSRETURN(call_pv("DynaLoader::bootstrap_inherit", GIMME));
}
