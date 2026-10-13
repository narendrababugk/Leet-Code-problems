#include<Stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>


bool isPalindrome(char* s) {
  int i, j = 0;
char result[100000];

for (i = 0; s[i] != '\0'; i++) {
    if (isalnum((unsigned char)s[i])) {
        result[j] = tolower((unsigned char)s[i]);
        j++;
    }
}

result[j] = '\0';

int len = strlen(result);
int left = 0, right = len - 1;

while (left < right) {
    if (result[left] != result[right]) {
        return false;
    }

    left++;
    right--;
}

return true;

}

void main(){
char str[1000];
printf("Enter the string to find it is palindrome or not:");
scanf("%c",str);
if(isPalindrome(str)){
printf("Palindrome");
}
else{
printf("Not palindrome");
}
}