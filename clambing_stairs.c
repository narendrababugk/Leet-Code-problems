#include<stdio.h>

int climbStairs(int n) {
    if(n<=2){
        return n;
    }
    int a=1;
    int b=2;
    int c;
    for(int i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;

}

void main(){
int n;
printf("Enter the no of stairs:");
scanf("%d",&n);
printf("The different possible ways to claimb the stairs is:%d",climbStairs(n));
}