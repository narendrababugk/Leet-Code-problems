#include<stdio.h>
#include<stdlib.h>
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
int* result = (int*)malloc(2 * sizeof(int));
*returnSize = 2;

result[0]=-1;
result[1]=-1;

int left=0,right=numsSize-1;

while(left<=right) {
int mid =left+(right-left)/2;

 if (nums[mid]==target) {
     result[0]=mid;
     right=mid-1;
 } 
 else if(nums[mid]<target) {
     left=mid+1;
 } 
 else {
     right=mid-1;
 }

}

left =0;
right =numsSize-1;

while (left<=right) {
int mid =left+(right-left)/2;

 if (nums[mid]==target) {
     result[1]=mid;
     left=mid+1;
 } 
 else if(nums[mid]<target) {
     left=mid+1;
 } 
 else {
     right=mid-1;
 }

}
return result;
}
void main(){
int n,t;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements:\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the target value:");
scanf("%d",&t);
int returnSize=0;
int* res=searchRange(arr,n,t,&returnSize);
	for (int i = 0; i < returnSize; i++){
		printf("%d ", res[i]);
	}
	
}