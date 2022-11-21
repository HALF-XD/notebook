/* 打印学生基本信息
用不同的基本数据类型保存一名学生的各项信息，并打印输出。
*/ 

/* c语言数据类型分类 [标量类型] [聚合类型] [联合类型] [函数类型] [空类型]
原生数据类型
    字符型 char         [标量类型]
    整型 int            [标量类型]
    单精度浮点型 float   [标量类型]
    双精度浮点型 double  [标量类型]
    空类型  void        [空类型]
派生数据类型
    数组    Array       [聚合类型]
    指针    Pointer     [标量类型]
    函数类型 Function    [函数类型] 
用户自定义数据类型
    枚举类型 enum        [标量类型]
    结构体  struct       [聚合类型]
    联合体  union        [联合类型]
*/ 

#include <stdbool.h>
#include <stdio.h>
int main(){
    int student_id = 1001;
    char name[] = "张三";
    char sex[] = "男";
    int age = 18;
    bool only_child = true;
    float height = 178.33;
    float weight = 55.44;

    printf("student ID:\t%d\n", student_id);
    printf("name:\t%s\n", name);
    printf("sex:\t%s\n", sex);
    printf("age:\t%d\n", age);
    printf("height:\t%.2f\n", height);
    printf("weight:\t%.2f\n", weight);
    printf("only child:\t%s\n", only_child ? "Yeah": "noo");

    return 0;
}