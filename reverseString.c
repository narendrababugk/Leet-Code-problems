#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString(char* s, int sSize) {
    char* s2=(char*)malloc(sSize*sizeof(char));
    for(int i=0;i<sSize;i++){
        s2[i]=s[i];
    }
    for(int i=0;i<sSize;i++){
        s[sSize-1-i]=s2[i];
    }
    
}
void main(){
char arr[10000];
printf("Enter the string:");
scanf("%s",arr);
int n=strlen(arr);
reverseString(arr,n);
printf("Reversed string is: %s\n", arr);
}