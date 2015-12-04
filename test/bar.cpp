#include "bar.hpp"

int bar::importance(boost::filesystem::path p) const { return x_ + y_ + z_; }
