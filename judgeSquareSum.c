#include<stdio.h>
#include<stdbool.h>
#include <math.h>

bool judgeSquareSum(int c) {

    long long i=0;
    long long j=sqrt(c);


    while(i<=j){
        long long sum=i*i+j*j;
        if (sum==c) {
            return true;
        }
        if(sum<c){
            i++;
        }
        else{
            j--;
        }
    }

    return false;
}
void main(){
int n;
printf("Enter the value:");
scanf("%d",&n);
bool res=judgeSquareSum(n);
printf("%s\n", res ? "true" : "false");
}