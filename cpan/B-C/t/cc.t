#! /usr/bin/env perl
# better use testcc.sh for debugging
BEGIN {
  if ($ENV{PERL_CORE}) {
    unshift @INC, ('t', '../../lib');
  } else {
    unshift @INC, 't', "blib/arch", "blib/lib";
  }
  require TestBC; # for run_perl()
}
use strict;
my $DEBUGGING = ($Config{ccflags} =~ m/-DDEBUGGING/);
#my $ITHREADS  = ($Config{useithreads});

prepare_c_tests();

my @todo  = todo_tests_default("cc");
# skip core dumps and endless loops, like custom sort or runtime labels
my @skip = (14,21,30,
	    46, # unsupported: HvKEYS(%Exporter::) is 0 unless Heavy is included also
            103, # hangs with non-DEBUGGING
	    ((!$DEBUGGING and $] > 5.010) ? (105) : ()),
           );
push @skip, (38) if $^O eq 'cygwin'; #hangs
if ($Config{ccflags} =~ m/-flto/ and $ENV{PERL_CORE}) { # just too big files
  push @todo, (27,41,42,43,44,45,49);
  push @skip, (27,41,42,43,44,45,49);
}

run_c_tests("CC", \@todo, \@skip);
#run_cc_test(105, 'CC', 'my $s=q{ok};END{print $s}END{$x = 0}', 'ok');
