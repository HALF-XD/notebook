// 使用指向指针数据的指针变量

# include<stdio.h>
int main()
{
	char *name[]={"Follow me","BASIC","Great Well","FORTRAN","Computer design"};
	char **p;
	int i;

	for(i=0;i<5;i++)
	{
		p=name+i;
		printf("%s\n",*p);
	}
	return 0;
}
