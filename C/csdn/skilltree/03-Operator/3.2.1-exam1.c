// 打印100以内（包含100）能被10整除的正整数.

#include <stdio.h>

#define UPPER 100

int main(int argc, char** argv)
{
    int i = 1;
    while(i++ < UPPER){
        if(i % 10 == 0) printf("%d\n", i);
    }
    return 0;
}