#include <stdio.h>
// 少参数 多参数 会发生什么？
int foo();
int bar();

int main(void)
{
  foo(2, 3, 4);
  return 0;
}

int foo(int a, int b)
{

  printf("foo-%d, %d \n", a, b);
  return bar(a);
}

int bar(int c, int d)
{
  printf("bar-%d, %d \n", c, d);
  int e = c + d;
  return e;
}
