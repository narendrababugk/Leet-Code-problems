#include<stdio.h>
#include<stdlib.h>


int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
         int *result = malloc(numsSize* sizeof(int));
    *returnSize = numsSize;

    int prefix=1;
    int i;
    for(i=0;i<numsSize;i++){
      result[i]=prefix;
      prefix=prefix*nums[i];
     
    }
    
    int sufix=1;

     for(i=numsSize-1;i>=0;i--){
      result[i]=result[i] *sufix;
      sufix=sufix*nums[i];
     
    }
    return result;
}

void main(){
int n;
int returnSize;
printf("Enter the size of the array:");
scanf("%d",&n);

int arr[n];
printf("Enter the array values:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

int *result = productExceptSelf(arr,n,&returnSize);

printf("Output: ");

for(int i = 0; i < returnSize; i++){
    printf("%d ", result[i]);
}

    free(result);
}