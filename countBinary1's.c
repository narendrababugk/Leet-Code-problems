#include<Stdio.h>
#include<stdlib.h>

int hammingWeight(int n) {
    int i=0;
    int binary[100];
    int sum=0;
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=0;j<i;j++){
        sum+=binary[j];
    }
    return sum;

}
void main(){
int num;
printf("\nEnter the integer number:");
scanf("%d",&num);
printf("\nThe total binary one's is:%d\n",hammingWeight(num));
}
