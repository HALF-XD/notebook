#include <stdio.h>

void prtValue(int x);

int main(void)
{
    extern int g_a;
    prtValue(g_a);
    return 0;
}

int g_a = 10;

void prtValue(int x)
{
    printf("%d\n", x);
}

/*
对于单个源文件的程序，如果某个全局变量不是在文件开头定义，而是在中间某个位置，
那么如果在定义位置之前的函数想使用这个全局变量，则可以采用 extern 来声明变量。
例如，示例程序中全局变量 g_a 定义在 main函数之后，要想在main函数中使用已经超出了 g_a 的作用域，这里就可以采用extern声明，即可使用，程序输出结果为10。
*/