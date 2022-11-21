#include<stdio.h>
#include<string.h>

// 字符数组的输入和输出
void case_inout(){
	char str[5];  
	// 第一种方法
    scanf("%s", str);  
	printf("%s\n", str);
	
    printf("111111\n");

    // 第二种方法
	gets(str);
	puts(str);
}

// 字符串连接函数
void case_concat(){
	char str1[15] = "abcd";
	char str2[6] = "ABCD";
	strcat(str1, str2);
	printf("%s\n",str1);
}

// 字符串复制函数
void case_copy(){
    char str1[15];
	char str2[6] = "world";
	strcpy(str1, str2);// 将str2字符数组复制到str1中，str1的容量必须比str2大
	printf("%s\n",str1);

	strncpy(str1, str2, 3);//将前3个字符复制到str1中
	printf("%s\n",str1);
}

// 字符串比较函数
void case_compare(){
    char str1[15]="hello";
	char str2[6] = "world";
	printf("%d\n",strcmp(str1,str2));
}

// 字符串长度函数
void case_length(){
    char str[15]="hello";
	printf("%lu\n",strlen(str));
}

// 字符串转换大小写函数
void case_toggle(){
    char str[15] = "Hello";
	strlwr(str, 6); // 第一个参数传一个char类型的指针，可以传一个数组，第二个参数传入strlen(str) + 1
	printf("%s\n",str);

	strupr(str, 6);
	printf("%s\n",str);
}

int main()
{
    // case_inout();    // 字符数组的输入和输出
    // case_concat();   // 字符串连接函数
    // case_copy();     // 字符串复制函数
    // case_compare();  // 字符串比较函数
    // case_length();   // 字符串长度函数
    case_toggle();      // 字符串转换大小写函数
	return 0;
}

