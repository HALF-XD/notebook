#include <stdio.h>

// limits.h专门用于检测整型数据数据类型的表达值范围。
#include <limits.h>

int main(){
  // %lu 为 32 位无符号整数，
  // https://www.runoob.com/cprogramming/c-function-printf.html
  
  // sizeof(type) 得到对象或类型的存储字节大小
  printf("int 存储大小: %lu \n", sizeof(int));
  return 0;
}


