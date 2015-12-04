# test make file

USES = libzip

LIBS = foo
foo_STEMS = foo bar

PROGRAMS = x baz qux
x_STEMS = x
baz_STEMS = baz
qux_STEMS = qux

TESTS = bar-test
bar-test_STEMS = bar-test

LDLIBS = -lboost_filesystem$(boost_mt) -lboost_system$(boost_mt)

include mku-include
