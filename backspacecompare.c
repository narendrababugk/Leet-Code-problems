#include<stdio.h>
#include<string.h>
#include <stdbool.h>

bool backspaceCompare(char* s, char* t) {
    int top1 = -1;
    int top2 = -1;
    int len1 = strlen(s);
    int len2 = strlen(t);
    char str1[len1 + 1];
    char str2[len2 + 1];

    for (int i = 0; i < len1; i++) {
        if (s[i] != '#') {
            top1 = top1 + 1;
            str1[top1] = s[i];
        }
        else if (top1 != -1) {
            top1 = top1 - 1;
        }
    }

    for (int i = 0; i < len2; i++) {
        if (t[i] != '#') {
            top2 = top2 + 1;
            str2[top2] = t[i];
        }
        else if (top2 != -1) {
            top2 = top2 - 1;
        }
    }
    str1[top1 + 1] = '\0';
    str2[top2 + 1] = '\0';
    if (strcmp(str1, str2) == 0) {
        return true;
    }
    else {
        return false;
    }
}

void main(){
int n;
printf("Enter the size of the two strings:");
scanf("%d",&n);

char str1[n];
char str2[n];

printf("Enter string 1 :");
scanf("%s",str1);

printf("\nEnter string 2 :");
scanf("%s",str2);

if (backspaceCompare(str1,str2)) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }
}



