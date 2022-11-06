#include <stdio.h>

void test_1(){
    int a = 100;
    char b = 'o';
    double c = 100.5;

    printf("%d\n", a);
    printf("%c\n", b);
    printf("%d\n", b);
    printf("%f\n", c);

    int* iptr;
    char* cptr;
    double* dptr;

    iptr = &a;
    cptr = &b;
    dptr = &c;


}

int main(){
    test_1();
    return 0;
}