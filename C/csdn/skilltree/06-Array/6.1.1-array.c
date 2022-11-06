#include <stdio.h>

void initArray(){
    printf("initArray: \n");
    // 数组创建的实例
    // 数组的初始化:在创建数组的同时给数组的内容一些合理初始值
    int count = 10; // 数组创建，[]中要给一个常量才可以，不能使用变量。
    int arr1[count]; // variable-sized object may not be initialized 
    int arr2[] = { 1, 2, 3, 4 }; 
    char arr4[3] = { 'a', 98, 'c' }; 
    char arr5[] = { 'a', 'b', 'c' }; 
    char arr6[] = "abcdef";
    float arr7[1] = { 0.3 };
    double arr8[20] = { 0.4, 0.03};

    // printf("%d\n", arr1); // -304752416
    printf("%lu, %lu\n", sizeof(arr1), sizeof(arr1[0]));
    printf("%lu, %lu\n", sizeof(arr2), sizeof(arr2[0]));
    printf("%lu, %lu\n", sizeof(arr4), sizeof(arr4[0]));
    printf("%lu, %lu\n", sizeof(arr5), sizeof(arr5[0]));
    printf("%lu, %lu, %lu\n", sizeof(arr6), sizeof(arr6[0]), sizeof(arr6[1]));
    printf("%lu, %lu, %lu\n", sizeof(arr7), sizeof(arr7[0]), sizeof(arr7[1]));
    printf("%lu, %lu, %lu\n", sizeof(arr8), sizeof(arr8[0]), sizeof(arr8[1]));

}

void applyArray(){
    printf("applyArray: \n");
    int arr[10] = {0};                      // 数组的不完全初始化    
	int sz = sizeof(arr) / sizeof(arr[0]);  // 计算数组的元素个数  
    printf("%d \n", sz);

    // 对数组内容赋值,数组是使用下标来访问的，下标从0开始。所以：    
	int i = 0;
	for(i=0; i<10; ++i){
		printf("%d ", arr[i]);   
	}

    printf("\n");
}

void storage(){
    printf("storage: \n");
    int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
}

void boundary(){
    printf("boundary: \n");
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};  
	int i = 0;    
	for(i=0; i<=10; i++)
    {
		printf("%d \t", arr[i]); // 当i等于10的时候，越界访问了   
	}

    printf("\n");
}

void arrayName(){
    printf("arrayName: \n");
    int arr1[10] = {1,2,3,4,5};    
	printf("%p\n", arr1);   
	printf("%p\n", &arr1[0]);   
	printf("%d\n", *arr1);   // 1

    int arr2[10] = {0};
    printf("%d\n", sizeof(arr2)); // 40
}

int main(){
    initArray();
    applyArray();
    storage();
    boundary();
    arrayName();
    return 0;
}