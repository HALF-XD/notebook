// Bubble Sort [Basic]

#include <stdio.h>

int main(){
	int nums[] = {4,5,3,1,2};
	int temp,len=5;

    // for(int i = 0; i<len; i++){
    //     for(int j = 0; j < len-i-1; j++){
	
    for(int i = len; i>0; i--){
		for(int j = 0; j < i-1; j++){ 
            printf("i: %d, j: %d     ",i,j);
            printf("比较 nums[%d]: %d, ", j, nums[j]);
            printf("nums[%d]: %d     ", j+1, nums[j+1]);
			
            if (nums[j] > nums[j+1])
            {
				temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp;
			}

            for(int i = 0; i < len; i++)	
                printf("%d ", nums[i]);
            printf("\n");
		}
	}

    printf("Final result : ");
	for(int i = 0; i < len; i++)	
		printf("%d ", nums[i]);
	printf("\n");	
	return 0;
}
