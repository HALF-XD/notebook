#include <stdio.h>
#include <math.h>
// 完整的复数运算
// 基础上增加 数据类型 enum

typedef void (*sighandler_t)(int);

sighandler_t signal(int signum, sighandler_t handler);

typedef void (*signal(int signum, void (*handler)(int)))(int);


int main(void)
{
  return 0;
}