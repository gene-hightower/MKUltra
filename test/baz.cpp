#include "foo.hpp"
#include "bar.hpp"

int main() {
  foo f(0, 0, 0);
  bar b(0, 0, 0);

  boost::filesystem::path p;

  return f.importance() + b.importance(p);
}
