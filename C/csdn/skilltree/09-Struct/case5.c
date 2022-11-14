// 通过指向结构体变量的指针变量输出结构体变量中成员的信息

#include<stdio.h>
#include<string.h>

int main()
{
    struct Student
    {
        long int num;
        char name[20];
        char sex[10];
        float score;
    };

    struct Student stu_1;   // 定义struct Student类型的变量stu_1
    struct Student *p;

    p = &stu_1;
    stu_1.num = 1010;
    strcpy(stu_1.name, "Li Lin");  // 用字符串复制给stu_1.name赋值
    strcpy(stu_1.sex, "Man");
    stu_1.score = 89.5;

    printf("num:%ld\nname:%s\nsex:%s\nscore:%5.1f\n", stu_1.num, stu_1.name, stu_1.sex, stu_1.score);
    printf("\nnum:%ld\nname:%s\nsex:%s\nscore:%5.1f\n", (*p).num, (*p).name, (*p).sex, (*p).score);

    return 0;

} 
