# test make file

USES = libzip

LIBS = foo

foo_STEMS = foo bar

PROGRAMS = x baz qux

TESTS = bar-test

LDLIBS = -lboost_filesystem$(boost_mt) -lboost_system$(boost_mt)

include mku-include
