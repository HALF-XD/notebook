// 自定义一个输出函数，打印C语言技能树的名称和网址。
/*
先声明，再调用
如果函数定义在main函数下面时，要手动在main函数上面声明
如果函数定义在main函数上面则不需要声明
*/ 

#include <stdio.h>

void print_skill_tree(char tree_name[], char link[]);
// void print_skill_tree(char [], char []); // 只是函数的声明，只需要知道形参的类型就可以了。

int main(int argc, char** argv){
    char tree_name[] = "C语言";
    char tree_link[] = "https://clang.csdn.net";
    print_skill_tree(tree_name, tree_link);
    return 0;
}

void print_skill_tree(char tree_name[], char link[]){
    printf("欢迎访问\"%s技能树\"网址：%s", tree_name, link);
}

