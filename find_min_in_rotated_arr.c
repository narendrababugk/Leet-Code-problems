#include<stdio.h>

int findMin(int* nums, int numsSize) {
    int max=nums[0];
    for(int i=1;i<numsSize;i++){
        if(max>nums[i]){
            max=nums[i];
        }
    }
    return max;
}


void main(){
int n,k;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements in ascening order:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter value to rotate the array:");
scanf("%d",&k);
for(int i = 0; i < k; i++){ 
int temp = arr[n - 1]; 
for (int j=n -1;j>0;j--){
arr[j]=arr[j-1];
}
arr[0] = temp; 
}
printf("Array after rotate:\n");
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}

int result=findMin(arr,n);
printf("\nResult:%d",result);
}