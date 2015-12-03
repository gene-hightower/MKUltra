# test make file

USES = libzip pango cairo pangocairo

LIBS = foo bar

PROGRAMS = x baz qux

baz_STEMS = foo bar
qux_STEMS = bar

include incl
