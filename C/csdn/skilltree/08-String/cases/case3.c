#include<stdio.h>
#define DEF "01234567890-MACRO"

int main(void)
{
    char str1[80] = "01234567890-ARRAY"; // array
    const char * str2 = "01234567890-POINTER"; // pointer

    puts("01234567890-STRING"); // string
    puts(DEF); // macro definition
    puts(str1);
    puts(str2);
    puts(&(str1[5])); // 必须用括号strl1[5]，因为str1将会首先结合&，然后在[5]结合，将出错
    puts(str2+5);

    return 0;
}