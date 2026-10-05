#include<stdio.h>
int removeElement(int* nums, int numsSize, int val) {
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == val) {
            for (int j = i; j < numsSize - 1; j++) {
                nums[j] = nums[j + 1];
            }
            numsSize--; 
            i--;
        }
    }
    
    return numsSize;
}

void main(){
int n;
int val;
printf("Enter the size of the array:");
scanf("%d",&n);

int arr[n];
printf("Enter the array elements:\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the value to remove:");
scanf("%d",&val);

int res=removeElement(arr,n,val);
printf("Result :%d",res);
}
