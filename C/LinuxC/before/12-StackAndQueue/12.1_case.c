#include <stdio.h>
// 例12.1 用堆栈实现倒序打印
char stack[512];
int top = 0;

void push(char c)
{
  stack[top] = c;
  top++;
}

char pop(void)
{
  top--;
  return stack[top];
}

int is_empty(void)
{
  return top == 0;
}

int main(void)
{
  push('a');
  push('b');
  push('c');

  while (!is_empty())
    putchar(pop());
  putchar('\n');

  return 0;
}