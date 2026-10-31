#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * mergeAlternately(char * word1, char * word2){
    int len1=strlen(word1);
    int len2=strlen(word2);

    char* arr=(char*)malloc((len1+len2+1)*sizeof(char));

    int i=0,j=0,k=0;

    while (i<len1||j<len2) {

        if (i<len1) {
            arr[k++]=word1[i++];
        }
        if (j<len2) {
            arr[k++]=word2[j++];
        }
    }
    arr[k]='\0';
    return arr;
}
void main() {
    char word1[100], word2[100];

    printf("Enter first string: ");
    scanf("%99s", word1);
    printf("Enter second string: ");
    scanf("%99s", word2);

    char* result = mergeAlternately(word1, word2);
    printf("Merged string: %s\n", result);
    free(result);

}