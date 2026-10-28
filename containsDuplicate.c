#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool containsDuplicate(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]>nums[j]){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        
        }

    }
  
    for(int j=0;j<numsSize-1;j++){
        if (nums[j] == nums[j+1]) {
            return true;
        }
    }

    

    return false;
}
void main(){
int n;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements:\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
bool res=containsDuplicate(arr,n);
printf("%s\n", res ? "true" : "false");
}