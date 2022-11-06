#include <stdio.h>

void pointer_1(){
    int a = 100;
    char b = 'o';
    double c = 100.5;

    // 创建指针变量
    int* iptr; 
    char* cptr;
    double* dptr;

    // 给指针变量赋值
    iptr = &a;
    cptr = &b;
    dptr = &c;

    printf("iptr: %p\n", iptr);
    printf("cptr: %p\n", cptr);
    printf("dptr: %p\n", dptr);

}

void pointer_2(){
    // 取指针变量保存的地址中的值
    int a = 100;
    int* iptr = &a;
    int b = *iptr;
    printf("b: %d\n", b);
}

int main(){
    pointer_1();
    pointer_2();
    return 0;
}