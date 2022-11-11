// 指针数组和多重指针
// 将若干字符串按照字母顺序(由小到大)输出

# include<stdio.h>
# include<string.h>

int main(void){
	void sort1(char *name[],int n);
	void print(char *name[],int n);
	char *name[]={"Follow Me","Basic","Great Wall","Fortran","Computer Design"};
	int n=5;
	sort1(name,n);
	print(name,n);
	return 0;
}

void sort1(char *name[],int n){
	char *temp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
			if(strcmp(name[i],name[j])>0)
			{
				temp=name[i];
				name[i]=name[j];
				name[j]=temp;
			}
	}
}

// 可降低计算复杂度
void sort2(char *name[],int n){
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++)
			if(strcmp(name[k],name[j])>0)
				k=j;
			if(k!=i)
			{
				temp=name[i];
				name[i]=name[k];
				name[k]=temp;
			}
	}
}

void print(char *name[],int n){
	int i;
	for(i=0;i<n;i++)
		printf("%s\n",name[i]);
}
