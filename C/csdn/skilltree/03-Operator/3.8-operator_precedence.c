// 表格从上到下，优先级逐步递减。
// 类别	运算符	结合性
// 后缀运算符(Postfix)	        () [] -> . ++ - -	            从左到右
// 一目运算符(Unary)	        + - ! ~ ++ - - (type)* & sizeof	从右到左
// 乘性运算符(Multiplicative)	* / %	    从左到右
// 加性运算符(Additive)	        + -	        从左到右
// 移位运算符(Shift)	        << >>	    从左到右
// 关系运算符(Relational)	    < <= > >=   从左到右
// 等性运算符(Equality)	        == !=	    从左到右
// 位与运算符(Bitwise AND)	    &	        从左到右
// 位异或运算符(Bitwise XOR)	^	从左到右
// 位或运算符(Bitwise OR)	    |	从左到右
// 逻辑与运算符(Logical AND)	&&	从左到右
// 逻辑或运算符(Logical OR)	    ||	从左到右
// 条件运算符(Conditional)	    ?:	从右到左
// 赋值运算符(Assignment)	    = += -= *= /= %=>>= <<= &= ^= |=	从右到左
// 逗号运算符(Comma)	        ,	从左到右

#include <stdio.h>

int main(int argc, char** argv)
{
    int x, y, z;
    x = y = 1;
    // z = (x++, ++y), y++; // 2,3,2
    // z = x++, ++y, y++;   // 2,3,1
    // z = (x++, ++y, y++); // 2,3,2
    (z = (x++, ++y)), y++;  // 2,3,2
    printf("%d,%d,%d\n", x, y, z);

    return 0;
}