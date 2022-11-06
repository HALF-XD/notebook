#include <stdio.h>
#include <stdlib.h>
#define N 20
// 生成并打印随机数
int a[N];

void gen_random(int upper_bound)
{
  int i;
  for (i = 0; i < N; i++)
    a[i] = rand() % upper_bound + 10;
}

void print_random()
{
  int i;
  for (i = 0; i < N; i++)
    printf("%d ", a[i]);
  printf("\n");
}

int main(void)
{
  gen_random(10);
  print_random();
  return 0;
}