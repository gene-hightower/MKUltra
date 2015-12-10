# test make file

USES := JAVA libzip

LIBS := foo
foo_STEMS := foo bar

PROGRAMS := x baz qux jvm
x_STEMS := x
baz_STEMS := baz
qux_STEMS := qux
jvm_STEMS := jvm

TESTS := bar-test

LDLIBS += -lboost_filesystem$(boost_mt) -lboost_system$(boost_mt)

include ../rules
