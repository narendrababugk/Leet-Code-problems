#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int* arr=(int*)malloc(2*sizeof(int));
    *returnSize=0;
    int i=0;
    int j=numbersSize-1;
    
    while(i<j){
        int sum=numbers[i]+numbers[j];
    
    if(sum==target){
            arr[0]=i+1;
    
            arr[1]=j+1;
            *returnSize=2;
            return arr;
    }
    if(sum<target){
        i++;
    }
    else{
        j--;
    }
    }
    return NULL;
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
int* res=twoSum(arr,n,t,&returnSize);
	for (int i = 0; i < returnSize; i++){
		printf("%d ", res[i]);
	}
	
}