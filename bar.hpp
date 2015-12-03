#ifndef BAR_HPP_INCLUDED
#define BAR_HPP_INCLUDED

class bar {
public:
  bar(int x, int y, int z) : x_(x), y_(y), z_(z) {}

  int importance() const;

private:
  int x_, y_, z_;
};

#endif // BAR_HPP_INCLUDED
