#include<stdio.h>
#include <limits.h>
//In the below function code is time complexity is 0(n2)
/*
double findMaxAverage(int* nums, int numsSize, int k) {
    int maxsum=INT_MIN;;
    for(int i=0;i<=numsSize-k;i++){
          int sum=0;  
        for(int j=i;j<i+k;j++){
            sum+=nums[j];
        }
        if(maxsum<sum){
            maxsum=sum;
        }
    }
    double average=(double)maxsum/k;
    return average;
}*/

double findMaxAverage(int* nums, int numsSize, int k) {

int sum = 0; 
for (int i=0;i<k;i++){ 
    sum+=nums[i];
} 
int maxsum=sum; 
for (int i=k;i <numsSize;i++){
    sum=sum-nums[i-k]+nums[i];
    if(sum>maxsum){ 
        maxsum=sum; 
    } 
} 
return (double)maxsum / k;
}
void main(){
int n,k;
printf("Enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("Enter the array elements :\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("Enter the k value:");
scanf("%d",&k);

double res=findMaxAverage(arr,n,k);
printf("Result is :%f",res);
}