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

#ifndef BAR_HPP_INCLUDED
#define BAR_HPP_INCLUDED

#define BOOST_FILESYSTEM_NO_DEPRECATED
#include <boost/filesystem.hpp>

class bar {
public:
  bar(int x, int y, int z) : x_(x), y_(y), z_(z) {}

  int importance(boost::filesystem::path p) const;

private:
  int x_, y_, z_;
};

#endif // BAR_HPP_INCLUDED
