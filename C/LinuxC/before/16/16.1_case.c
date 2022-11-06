#include <stdio.h>

void bit_operate()
{
  // 1.2 左移运算 右移运算
  unsigned char c = 0xfc;
  printf("%x\n", c);

  unsigned int i = ~c;
  printf("%x\n", i);

  int j = 0xcffffff3;
  printf("1:%x\n", 0xcffffff3 >> 2);
  printf("1:%d\n", 0xcffffff3 >> 2);
  printf("2:%x\n", j >> 2);
  printf("2:%d\n", j >> 2);
}

void mask()
{
  // 1.3 掩码
  // 掩码0x0000ff00表示对一个32位整数的8~15位进行操作
  // 1、取出8~15 位。
  unsigned int a, b, mask = 0x0000ff00;
  a = 0x12345678;
  // b = (a & mask) >> 8;
  b = (a >> 8) & ~(~0 << 8);
  printf("%x\n", b);
  printf("%x\n", a & ~mask); // 2.将8~15 位清0。
  printf("%x\n", a | mask);  // 3.将8~15 位置1。
}

void or_operate()
{
  unsigned int a, b, mask = 1 << 6;
  a = 0x123456b8;
  b = a ^ mask;
  printf("%x\n", b);
  printf("%x\n", a ^ mask);
}

void size_of()
{
  int a[12];
  printf("%lu\n", sizeof a);
  printf("%lu\n", sizeof a[0]);
}
int main(void)
{
  size_of();
  return 0;
}