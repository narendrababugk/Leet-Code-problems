#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int res=0,i=0;
    while(i<numsSize){
        if(target==nums[i]){
           return res= i;
        }
        
        if(target<nums[i]){
             return res= i;
    
        }
        i++;
    }
    return numsSize;
}

void main(){
int n,t;
printf("Enter the array size:");
scanf("%d",&n);
int arr[n];
printf("Enter the  array elements:\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("Enter the target value:");
scanf("%d",&t);

int res=searchInsert(arr,n,t);
printf("Result:%d",res);
}