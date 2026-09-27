#include<stdio.h>
#include<string.h>
#include <stdbool.h>

bool isValid(char* s) {
    int top = -1;
    int len = strlen(s);
    char str[len];

    for(int i=0;i<len;i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            top=top+1;
            str[top]=s[i];
        }
        else{
            if(top==-1){
                return false;
            }
         
            char topChar = str[top];
               top=top-1;

            if ((s[i] == ')' && topChar != '(') ||
                (s[i]  == '}' && topChar != '{') ||
                (s[i]  == ']' && topChar != '[')) {
                    return false;
            }
        }
    }
    if (top == -1) {
        return true;
    }

    return false; 
}
int main() {
    char s[100];

    printf("Enter brackets: ");
    scanf("%s", s);

    if (isValid(s)) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}