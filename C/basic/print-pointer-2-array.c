// http://blog.chinaunix.net/uid-29665664-id-5755411.html
// 指针: 内存地址 + 内存长度
#include <stdio.h>

void print_pointer()
{
  int arr[2] = {0x2, 0x4};
  printf("%lu \n", sizeof(arr));
  printf("%lu \n", sizeof(arr[0]));
  printf("%lu \n", sizeof(arr) / sizeof(arr[0]));

  printf("arr     = %p \n", arr);
  printf("&arr    = %p \n", &arr);
  printf("(arr+0) = %p \n", (arr + 0));
  printf("(arr+1) = %p \n", (arr + 1));
  printf("&arr[0] = %p \n", &arr[0]);
  printf("&arr[1] = %p \n", &arr[1]);

  int *p_arr = arr; // p_arr 是一个指向数组中元素的指针 , 长度=4个字节
  int *p_arr_ele_1 = &arr[0];
  printf("int *p_arr       = %d \n", *p_arr);
  printf("int *p_arr_ele_1 = %d \n", *p_arr_ele_1);
  printf("sizeof(*p_arr)   = %lu \n", sizeof(*p_arr));
  printf("sizeof(*p_arr_ele_1) = %lu \n", sizeof(*p_arr_ele_1));
}

void print_pointer_long()
{
  int arr2[2] = {0x2, 0x4};
  long *p_long_1 = (long *)arr2;

  printf("sizeof(long) = %lu \n", sizeof(long));
  printf("p_long_1     = %p \n", p_long_1);
  printf("(*p_long_1)  = %ld \n", (*p_long_1));
}

void print_2()
{
  int arr[3] = {11, 22, 33};
  /*
  虽然 arr 是数组名 , 等价于 &arr[0] ,
  但是: 不能作以下这种等价代换 , &arr <==> &(&arr[0])
  这是因为 &arr[0] 已经是一个内存地址, 而这个内存地址也并没有存储在一个变量中, 已经是一个表达式的值了, 所以无法再用取地址符号&了。
  */
  int(*p_arr)[3] = &arr; // p_arr 是一个指针, 指向1个1维数组, 此数组的长度=12个字节(1个int是4个字节, 4*3=12 bytes)

  /* 4者的值是一致的 , 但是内存长度不一致 , 解引用取内容后的内存长度也不一致 */
  printf("arr     = %p \n", arr);
  printf("&arr[0] = %p \n", (&arr[0])); // &arr[0] -> int
  printf("&arr    = %p \n", (&arr));    // &arr -> int[3] , 指向一个1维数组, 此1维数组, 包含3个int元素的1维数组
  printf("p_arr   = %p \n", p_arr);

  /* */
  printf("sizeof( arr )     = %lu \n", sizeof(arr));     // 求arr整个数组的长度 = 4*3=12
  printf("sizeof( &arr[0] ) = %lu \n", sizeof(&arr[0])); // 求指向arr[0]的指针变量的内存长度,64位机,取址长度统一为8
  printf("sizeof( &arr )    = %lu \n", sizeof(&arr));    // 8
  printf("sizeof( p_arr )   = %lu \n", sizeof(p_arr));   // 8
  // p_arr = &arr , 是通过赋值运算得来的,所以二者的sizeof的结果是一致
  // 无论如何,任何指针的 sizeof(...),在64位机器上，都是8

  /*  */
  printf("sizeof( *arr )       = %lu \n", sizeof(*arr));       // 4
  printf("sizeof( *(&arr[0]) ) = %lu \n", sizeof(*(&arr[0]))); // 4
  printf("sizeof( *p_arr )     = %lu \n", sizeof(*p_arr));     // 12

  printf("p_arr     = %p \n", p_arr);
  printf("p_arr + 1 = %p \n", (p_arr + 1));
  printf("++p_arr   = %p \n", ++p_arr);
  printf("p_arr     = %p \n", p_arr);

  // 用*符号,解引用
  // *arr, 最后得到的内存长度是 4
  // *(&arr[0]), 最后得到的内存长度是 4
  // *p_arr, 最后得到的内存长度是 12 , 所以这里又回到了之前强调的指针还包含内存的长度
  printf("sizeof(*arr)       = %lu \n", sizeof(*arr));
  printf("sizeof(*(&arr[0])) = %lu \n", sizeof(*(&arr[0])));
  printf("sizeof(*p_arr)     = %lu \n", sizeof(*p_arr));
  printf("(p_arr + 1)        = %p \n", (p_arr + 1));
  printf("++p_arr            = %p \n", ++p_arr);
}
int main()
{
  // print_pointer();
  // print_pointer_long();
  print_2();
}