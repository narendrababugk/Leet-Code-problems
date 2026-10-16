#include<stdio.h>

int singleNumber(int* nums, int numsSize) {
    int count=0;
    int s=0;

    for(int j=0;j<numsSize;j++){
                s=s^nums[j];

        }
    return s;
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

int res=singleNumber(arr,n);
printf("Single number is :%d",res);
}