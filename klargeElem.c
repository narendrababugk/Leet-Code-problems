#include<stdio.h>

/*int findKthLargest(int* nums, int numsSize, int k) {
    int i=0,j,res;

    while(i<numsSize){}
        for(j=i+1;j<numsSize;j++){
            if(nums[i]<nums[j]){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
        i++;
    }
    return nums[k - 1];
}*/


int findKthLargest(int* nums, int numsSize, int k) {
    int target = numsSize - k;

    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int pivot = nums[left];
        int low = left;
        int mid = left;
        int high = right;
        while (mid <= high) {

            if (nums[mid] < pivot) {

                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;

                low++;
                mid++;
            }
            else if (nums[mid] > pivot) {

                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;

                high--;
            }
            else {
                mid++;
            }
        }
        if (target < low) {
            right = low - 1;
        }
        else if (target > high) {
            left = high + 1;
        }
        else {
            return pivot;
        }
    }

    return -1;
}

void main(){
int n,k;
printf("Enter the size of the array:");
scanf("%d",&n);

int arr[n];
printf("Enter the array elements:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("Enter the k value:");
scanf("%d",&k);

int result = findKthLargest(arr, n, k);

printf("The %dth largest element is: %d\n", k, result);

}
