#include<stdio.h>
#include<stdlib.h>
char* intToRoman(int num) {
    char *arr = (char*)malloc(20 * sizeof(char));

    int values[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };

    char *roman[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    int j = 0;

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {

            int k = 0;

            while (roman[i][k] != '\0') {
                arr[j] = roman[i][k];
                j++;
                k++;
            }

            num -= values[i];
        }
    }

    arr[j] = '\0';

    return arr;
}
void main(){
int num;
printf("Enter a integer number:");
printf("\n");
scanf("%d",&num);
 char *roman = intToRoman(num);
 printf("Roman number: %s\n", roman);
 free(roman);
}