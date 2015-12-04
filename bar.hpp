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
