#include <stdio.h>
// 头文件 float.h 定义了宏 
//  header file `float.h` defines macro
// 在程序中可以使用这些值和其他有关实数二进制表示的细节
#include <float.h>

int main()
{
  printf("float 存储最大字节数: %lu \n", sizeof(float)); // 4

  // %E 为以指数形式输出单、双精度实数
  // https://www.runoob.com/cprogramming/c-function-printf.html
  printf("float 存储最大值: %E \n", FLT_MAX); // 3.402823E+38
  printf("float 存储最小值: %E \n", FLT_MIN); // 1.175494E-38
  printf("float 精度值: %d \n", FLT_DIG);     // 6

  return 0;
}
