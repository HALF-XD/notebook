#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Rational
{
  int x, y;
};

struct Rational make_rational(int x, int y)
{
  struct Rational r;
  r.x = x;
  r.y = y;
  return r;
};

struct Rational add_rational(struct Rational r1, struct Rational r2)
{
  struct Rational r;
  r.x = r1.x * r2.y + r1.y * r2.x;
  r.y = r1.y * r2.y;
  return r;
};

struct Rational sub_rational(struct Rational r1, struct Rational r2)
{
  struct Rational r;
  r.x = r1.x * r2.y - r1.y * r2.x;
  r.y = r1.y * r2.y;
  return r;
};

struct Rational mul_rational(struct Rational r1, struct Rational r2)
{
  struct Rational r;
  r.x = r1.x * r2.x;
  r.y = r1.y * r2.y;
  return r;
};

struct Rational div_rational(struct Rational r1, struct Rational r2)
{
  struct Rational r;
  r.x = r1.x * r2.y;
  r.y = r1.y * r2.x;
  return r;
};

// 计算最大公约数
int euclid(int a, int b)
{
  if (a % b == 0)
    return b;
  else
    return euclid(b, a % b);
}

// 计算是否显示负号
char showMinus(struct Rational r)
{
  if ((r.x < 0 && r.y < 0) || (r.x > 0 && r.y > 0) || r.x == 0)
    return ' ';
  else
    return '-';
}

// 按照要求打印
void print_rational(struct Rational r)
{
  int gcd;
  int x = abs(r.x);
  int y = abs(r.y);
  if (x > y)
    gcd = euclid(y, x);
  else
    gcd = euclid(x, y);

  printf("gcd=%d\n", gcd);
  printf("r=%c%d/%d\n", showMinus(r), x, y);
  printf("r=%c%d/%d\n", showMinus(r), x / gcd, y / gcd);
}

int main(void)
{
  struct Rational a = make_rational(1, 16);
  struct Rational b = make_rational(1, -8);
  print_rational(a);
  print_rational(b);
  print_rational(add_rational(a, b));
  print_rational(sub_rational(a, b));
  print_rational(mul_rational(a, b));
  print_rational(div_rational(a, b));
  return 0;
}