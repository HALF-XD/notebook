#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int number;
    char *msg;
} unit_t;

int main(void)
{
    unit_t *p = malloc(sizeof(unit_t));
    // 等号右边是void *类型
    // 等号左边是unit_t *类型
    // 编译器会做隐式类型转换，void *类型和任何指针类型之间可以相互隐式转换
    while (1)
    {
        p->msg = malloc(1000000);
        strcpy(p->msg, "Hello world!");
        printf("msg:%s\n", p->msg);
    }

    return 0;
}