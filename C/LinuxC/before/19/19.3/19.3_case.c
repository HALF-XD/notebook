#include <stdio.h>
// 例 19.3. 研究结构体
int main(int args, char **argv)
{
  struct
  {
    char a;
    short b;
    int c;
    char d;
  } s;

  s.a = 1;
  s.b = 2;
  s.c = 3;
  s.d = 4;

  printf("%u\n", sizeof(s));
  printf("%lu\n", sizeof(s));
  return 0;
}
