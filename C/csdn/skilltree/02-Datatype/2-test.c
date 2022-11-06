#include <stdio.h>

void test_1(){
    int a = 100;
    printf("%d\n", a);

    char b = 'o';
    printf("%c\n", b);
    printf("%d\n", b);

    double c = 100.5;
    printf("%f\n", c);

}

int main(){
    test_1();
    return 0;
}