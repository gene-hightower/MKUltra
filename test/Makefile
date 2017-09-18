# test make file

# Copyright © 2016-2017 Gene Hightower <gene@digilicious.com>

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, version 3.

# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  See the file LICENSE.  If not, see
# <http://www.gnu.org/licenses/>.

#USES := Java libzip
USES := libzip

LIBS := foo
foo_STEMS := foo bar

LDLIBS += -lboost_filesystem$(boost_mt) -lboost_system$(boost_mt) -lglog

PROGRAMS := x baz qux
x_STEMS := x
baz_STEMS := baz
qux_STEMS := qux
jvm_STEMS := jvm

TESTS := bar-test

include ../rules
