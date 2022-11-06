/* arithmetic operators: 
'+', '-', '*', '/', '%', '++', '--'
*/ 

#include <stdio.h>
#define UPPER 100
int main(int argc, char** argv)
{
    int a = 11 , b = 2;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    printf("a %% b = %d\n", a%b);
    a++;
    printf("after a++, a = %d\n", a);
    b--;
    printf("after b--, b = %d\n", b);

    return 0;
}