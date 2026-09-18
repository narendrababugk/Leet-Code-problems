#include<stdio.h>
void *moveZeroes(int *nums,int numsSize){
int left=0,right;
for(right=0;right<numsSize;right++){
	if(nums[right]!=0){
		int temp=nums[left];
		nums[left]=nums[right];
	    nums[right]=temp;
		left++;
	}
}
 printf("After arranging numbers: ");

    for(int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
}

void main(){
	int numsize;
	printf("Enter the size of the array:");
	scanf("%d",&numsize);
	int nums[numsize];
	printf("\nEnter the numbers:");
	  for(int i = 0; i < numsize; i++)
    {
        scanf("%d ", &nums[i]);
    }
	moveZeroes(nums,numsize);
}