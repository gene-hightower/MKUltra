#include "foo.hpp"
#include "bar.hpp"

using namespace boost::filesystem;

int foo::importance() const {
  bar b(x_, y_, z_);
  path p("/tmp/x");
  return b.importance(p);
}
