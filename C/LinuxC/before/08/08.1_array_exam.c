#include <stdio.h>

int main(void)
{
  int a[4] = {
      3,
      2,
  };
  int b[4];
  for (int i = 0; i < 4; i++)
  {
    printf("a[%d]=%d\n", i, a[i]);
    b[i] = a[i];
  }

  for (int i = 0; i < 4; i++)
  {
    printf("b[%d]=%d\n", i, b[i]);
  }

  return 0;
}