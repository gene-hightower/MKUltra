/*
Copyright © 2016-2017 Gene Hightower <gene@digilicious.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, version 3.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  See the file LICENSE.  If not, see
<http://www.gnu.org/licenses/>.
*/

#ifndef FOO_HPP_INCLUDED
#define FOO_HPP_INCLUDED

#include "dll_spec.h"

class DLL_PUBLIC foo {
public:
  foo(int x, int y, int z) : x_(x), y_(y), z_(z) {}

  int importance() const;

private:
  int x_, y_, z_;
};

#endif // FOO_HPP_INCLUDED
