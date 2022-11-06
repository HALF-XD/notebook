#include <stdio.h>

int main(void)
{
  int sum, i;
  char input[6]; // 5位数最多；
  printf("Input number: \n");
  while (1)
  {
    sum = 0; // 每次循环清0；
    scanf("%s", input);
    for (i = 0; input[i] != '\0'; i++)
    {
      // 增加判断条件
      if (input[i] < '0' || input[i] > '9')
      {
        printf("Invalid input! \n");
        sum = -1;
        break;
      }
      sum = sum * 10 + input[i] - '0';
    }
    printf("input=%d\n", sum);
  }

  return 0;
}