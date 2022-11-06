#include <stdio.h>
#include <stdlib.h>
#define N 20

// 生成并打印随机数
int a[N];

void gen_random(int upper_bound)
{
  int i;
  for (i = 0; i < N; i++)
    a[i] = rand() % upper_bound;
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
  int i, histogram[10] = {};
  gen_random(10);
  print_random();
  for (i = 0; i < N; i++)
    ++histogram[a[i]];

  for (i = 0; i < 10; i++) // 打印1-10
    printf("%d ", i);

  printf("\n"); // 换行

  for (i = 0; i < 10; i++) // 打印1-10的个数
    printf("%d ", histogram[i]);

  int max = 0;
  for (i = 0; i < 10; i++) // 得出最多数字的个数
  {

    if (histogram[i] > max)
      max = histogram[i];
  }
  printf("max: %d\n", max);

  for (int i = 0; i < max; i++) // 打印星号
  {
    for (int j = 0; j < 10; j++)
    {
      if (histogram[j] > 0)
      {
        printf("* ");
        histogram[j]--;
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}