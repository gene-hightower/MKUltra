#ifndef FOO_HPP_INCLUDED
#define FOO_HPP_INCLUDED

class foo {
public:
  foo(int x, int y, int z) : x_(x), y_(y), z_(z) {}

  int importance() const;

private:
  int x_, y_, z_;
};

#endif // FOO_HPP_INCLUDED
