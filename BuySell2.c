#include<stdio.h>
#include<stdlib.h>

int maxProfit(int* prices, int pricesSize){
int profit=0;
for(int i=1;i<pricesSize;i++){
if(prices[i]>prices[i-1]){
profit=profit+(prices[i]-prices[i-1]);
}
}
return profit;
}

void main(){
int n;
printf("Enter the prices size:");
scanf("%d",&n);

int arr[n];
printf("Enter the prices list:");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int res=maxProfit(arr,n) ;
printf("Total profit:%d",res);
}