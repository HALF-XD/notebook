#include<stdio.h>
#define MAX 81

int main(void)
{
    char name[MAX];
    char *ptr;

    printf("Please input your name.\n");
    ptr = fgets(name, MAX, stdin);

    printf("name, %s\n", name);
    printf("ptr, %s\n", ptr);

    return 0;
}