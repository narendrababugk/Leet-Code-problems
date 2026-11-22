#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* multiply(char* num1, char* num2) {
    int n1 = atoi(num1);
    int n2 = atoi(num2);
    int sum = n1 * n2;

    char *str = malloc(200 * sizeof(char));
    sprintf(str, "%d", sum);

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