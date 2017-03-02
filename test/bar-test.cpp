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

#include "bar.hpp"

#include <iostream>

int main()
{
  bar b(1, 2, 3);
  boost::filesystem::path p;
  if (b.importance(p) <0) {
    std::cerr << "this just isn't right\n";
    return 1;
  }
  return 0;
}
