// 使用常量表示圆周率π，并计算半径为2的圆的面积。常量有多种定义方法，请判断哪一项填在(1)处无法使程序正常运行。
// Use a constant to represent PI and calculate the area of a circle of radius 2. There are several ways to define constants. Determine which item (1) does not make the program run.

// int main(int argc, char** argv){} main函数的第二种写法，里面的是命令行参数

/* 常量 Constants
数值常量 Numeric Constants
    整型常量  Integer Constants         【例如：100,0x65F,015,0b101】
    浮点型常量 Floating Point Constants 【例如：0.25,-0.5e-7】
字符型常量 Character Constants
    单字符常量 Single Character Constants   【例如：'5','a','y','#'】
    字符串常量 String Constants             【例如："Hello World!","你好，世界！"】
*/ 

#include <stdio.h>
const float PI = 3.14; 
// #define PI 3.14;
int main(int argc, char** argv){
    float radius = 2.0;
    float area = PI * radius * radius;

    printf("The area of a circle of radius %.2f is %.2f\n", radius, area);

    return 0;
}