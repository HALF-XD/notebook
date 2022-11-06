#include <stdio.h>

int main()
{
  float f, x = 3.6, y = 5.2;
  int i = 4, a, b;
  a = x + y; //  x+y 值为 8.8，然后赋值给 a，因为a为整型，所以自取整数部分8，a=8;
  b = (int)(x + y); // 把 x+y 强制转换为整型
  f = 10 / i; // 10/i 是两个整数相除，结果仍为整数 2，把 2 赋给浮点数 f;
  printf("a=%d,b=%d,f=%f,x=%f\n", a, b, f, x);
}