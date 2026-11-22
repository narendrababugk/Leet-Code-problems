#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* multiply(char* num1, char* num2) {
    int n1=0,n2=0,sum;

    for (int i=0;num1[i]!='\0';i++) {
        n1=n1*10+(num1[i]-'0');
    }
    for (int i=0;num2[i]!='\0';i++) {
        n2=n2*10+(num2[i]-'0');
    }
     sum=n1*n2;
    char *str=(char*)malloc(sum*sizeof(char));
   
    int i=0;
    while(sum>0) {
        str[i]=(sum%10) + '0';
        sum=sum/10;
        i++;
    }
    str[i]='\0';
    for (int j=0;j<i/2;j++) {
        char temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }
return str;
}

int main() {
    char num1[100], num2[100];

    printf("Enter first number: ");
    scanf("%s", num1);

    printf("Enter second number: ");
    scanf("%s", num2);

    char *result = multiply(num1, num2);

    printf("Multiplication: %s\n", result);

    free(result);

    return 0;
}