// 输入一个正整数，判断其一共包含多少位.
// Enter a positive integer, how many digits does pi have

#include <stdio.h>

int main(int argc, char** argv)
{
    int num, count = 0;

    printf("please enter a positive integer: ");
    scanf("%d", &num);

    while(num > 0){
        num /= 10;
        count++;
    }

    printf("digits: %d\n", count);
    return 0;
}