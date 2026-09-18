#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
int myAtoi(char* s) {
    int len=strlen(s);
    int i=0,sign=+1,num=0;
    while(i<len  && s[i]==' '){
            i++;
        
    }
    if(s[i]=='-'){
      sign=-1;
     i++;
    }
           else if (s[i] == '+') {
        sign = 1;
        i++;
    }
while (i < len && s[i] >= '0' && s[i] <= '9') {

        if(s[i] < '0' || s[i] > '9')
            break;
             int digit = s[i] - '0';
    if (num > INT_MAX / 10 ||
            (num == INT_MAX / 10 && digit > 7)) {

            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        num = num * 10 + (s[i] - '0');
        i++;
    }

    return num * sign;


}
void main(){
char s[100];
printf("Enter the string:");
fgets(s, sizeof(s), stdin);

printf("Integere number is :%d",myAtoi(s));
}
