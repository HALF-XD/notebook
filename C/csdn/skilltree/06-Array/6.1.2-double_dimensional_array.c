#include <stdio.h>

void initArray(){
    printf("initArray: \n");
    //数组创建
    int arr1[3][4];
    char arr2[3][5];
    double arr3[2][4];

    //数组初始化
    int arr4[3][4] = {1,2,3,4};
    int arr5[3][4] = {{1,2},{4,5}};
    int arr6[][4] = {{2,3},{4,5}};

    printf("%lu, %lu\n", sizeof(arr1), sizeof(arr1[0][0]));
    printf("%lu, %lu\n", sizeof(arr2), sizeof(arr2[0][0]));
    printf("%lu, %lu\n", sizeof(arr3), sizeof(arr3[0][0]));
    printf("%lu, %lu\n", sizeof(arr4), sizeof(arr4[0][0]));
    printf("%lu, %lu\n", sizeof(arr5), sizeof(arr5[0][0]));
    printf("%lu, %lu\n", sizeof(arr6), sizeof(arr6[0][0]));

}

void applyArray(){
    printf("applyArray: \n");

    int arr[3][4] = {0};   

	for(int i = 0; i < 3; i++)
    {
		for(int j = 0; j < 4; j++)
        {
			arr[i][j] = i * 4 + j;      
		}
	}

	for(int i = 0; i < 3; i++)    
    {
		for(int j = 0; j < 4; j++)        
        {
			printf("%d ", arr[i][j]);     
		}   
	}

    printf("\n");
}

void storage(){
    printf("storage: \n");
    int arr[3][4];  
	int i = 0;    
	for(i=0; i<3; i++)    {
		int j = 0; 
		for (j = 0; j < 4; j++) 
        { 
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}   
}

void boundary(){
    printf("boundary: \n");
    int arr[2][3] = {{11,12,13},{21,22,23}};  
	int i=0;    
	for(i=0; i<=2; i++)    {
		int j=0; 
		for (j=0; j<3; j++) 
        { 
			printf("%d,  &arr[%d][%d] = %p\n",arr[i][j], i, j, &arr[i][j]);
		}
	}  
}

int main(){
    initArray();
    applyArray();
    storage();
    boundary();
    return 0;
}