// http://blog.chinaunix.net/uid-29665664-id-5755411.html
// 深入学习数组与指针之间的关系
#include <stdio.h>

void print_pointer1()
{
  int result = 234; // 定义一个int 类型的变量result
  // int *pa;          // 定义一个int 类型的指针pa
  // pi = &result;         // 将指针初始化，指向变量result的地址
  // 上面两步骤可合为一步
  int *pi = &result;
  printf("%d \n", *pi);     // 打印pi指针指向的地址的值
  printf("%p \n", &result); // 打印result的地址
  printf("%p \n", pi);      // 打印pi指针指向的地址
  printf("%p \n", &pi);     // 打印指针本身的地址，&pi表示打印指针pi自身的地址，并不是result变量的地址
}

void print_pointer2()
{
  int num = 123;
  int *p_num = &num;
  printf("=====1===== \n");
  printf("*p_num       = %d \n", *p_num);
  printf("*(p_num + 0) = %d \n", *(p_num + 0));
  printf("p_num[0]     = %d \n", p_num[0]);
  // *p_num + 1, 取 p_num 的值后,将取出的值+1,优先级 * 高于 +
  printf("*p_num + 1   = %d \n", *p_num + 1);

  /*----------*/
  // *(p_num + 1) 与 p_num[1] 一定相等
  printf("=====2===== \n");
  printf("*(p_num + 1) = %d \n", *(p_num + 1));
  printf("p_num[1]     = %d \n", p_num[1]);
  printf("*(++p_num)   = %d \n", *(++p_num));
  printf("*(--p_num)   = %d \n", *(--p_num));

  /*----------*/
  // 指针(内存地址)是可以偏移的,也可以自增自减,
  // 而每一步的偏移量就是指针所指向的数据类型的内存长度, 可以用 sizeof(*p_num) 来求出它的值,这里的example中是偏移1个int的内存长度,4个字节
  printf("p_num        = %p \n", p_num);
  printf("p_num + 1    = %p \n", p_num + 1);
}

int main()
{
  // print_pointer1();
  print_pointer2();
}