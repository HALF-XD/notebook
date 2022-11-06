// 演示C语言的结构体占用内存的情况
// 用sizeof可以得到结构体占用内容在总大小
// sizeof(结构体名)或sizeof(结构体变量名)都可以。

#include <stdio.h>

// #pragma pack(1)  # 告诉编器内存按1字节对齐。

struct st_girl
{
  char name[50];     // 姓名
  int  age;          // 年龄
  int  height;       // 身高，单位：厘米cm
  char sc[30];       // 身材，火辣；普通；飞机场。
  char yz[30];       // 颜值，漂亮；一般；歪瓜裂枣。
};

int main()
{
  struct st_girl queen;
  printf("sizeof(struct st_girl) %lu\n",sizeof(struct st_girl));
  printf("sizeof(queen) %lu\n",sizeof(queen));
}