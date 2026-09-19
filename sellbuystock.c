#include<stdio.h>


int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxprofit = 0;

    for(int i = 1; i < pricesSize; i++) {
        
        if(prices[i] < minPrice) {
            minPrice = prices[i];
        }
        
        int profit = prices[i] - minPrice;
        
        if(profit > maxprofit) {
            maxprofit = profit;
        }
    }

    return maxprofit;
}

void main(){
	int pricesSize;
	printf("Enter the number of prices:");
	scanf("%d",&pricesSize);
	int prices[pricesSize];
	printf("Enter prices:\n");
	for(int i=0;i<pricesSize;i++){
		scanf("%d",&prices[i]);
	}
	int profit=maxProfit(prices,pricesSize);
	printf("Maximum profit is:%d",profit);
}
