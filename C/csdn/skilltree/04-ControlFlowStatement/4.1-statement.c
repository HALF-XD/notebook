/*小知识：C语言语句(Statements)的种类

标号语句(Labeled Statements)	
    标号语句是普通语句前面加上一个标号，C语言中有3种类型的标号	
    goto语句跳转的目标、switch语句中的case和default标号
复合语句(Compound Statements)	
    复合语句是将多条普通语句组织成一条语句	
    由大括号{}内的多个语句和声明组成的程序块就是复合语句
表达式语句(Expression Statements)	
    表达式语句是表达式后面加上分号";"	
    expression;
选择语句(Selection Statements)	
    选择语句又称为分支语句，有选择性地执行某段代码块	
    if语句、if-else语句、switch语句
迭代语句(Iteration Statements)	
    迭代语句又称为循环语句，不断地重复执行同一段代码	
    for循环、while循环、do-while循环
跳转语句(Jump Statements)	
    跳转语句可以打破当前的顺序控制流，使其跳转到特定的位置	
    break语句、continue语句、return语句以及goto语句
*/

// 使用for循环逐个字符打印 Hello World! 
#include <stdio.h>

int main(int argc, char** argv)
{
    char str[] = "Hello World!";
    size_t len = sizeof(str) / sizeof(char);
    size_t i;
    for (i = 0; i < len; ++i)
        printf("%c", str[i]);

    return 0;
}