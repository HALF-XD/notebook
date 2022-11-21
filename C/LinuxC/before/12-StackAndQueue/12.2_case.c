#include <stdio.h>
// 例 12.2. 用递归实现倒序打印
#define LEN 3

char buf[LEN] = {'a', 'b', 'c'};

void print_backward(int pos)
{
  if (pos == LEN)
    return;
  print_backward(pos + 1);
  putchar(buf[pos]);
}

int main(void)
{
  print_backward(0);
  putchar('\n');

  return 0;
}