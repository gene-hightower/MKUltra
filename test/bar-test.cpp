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
