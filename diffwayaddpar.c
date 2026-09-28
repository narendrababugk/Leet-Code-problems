#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int* diffWaysToCompute(char* expression, int* returnSize) {

    int len = strlen(expression);

    int capacity = 10;
    int* result = malloc(capacity * sizeof(int));
    int count = 0;

    for (int i = 0; i < len; i++) {

        if (expression[i] == '+' ||
            expression[i] == '-' ||
            expression[i] == '*') {

            char left[100], right[100];

            strncpy(left, expression, i);
            left[i] = '\0';

            strcpy(right, expression + i + 1);

            int leftSize, rightSize;

            int* leftResult =
                diffWaysToCompute(left, &leftSize);

            int* rightResult =
                diffWaysToCompute(right, &rightSize);

            for (int j = 0; j < leftSize; j++) {

                for (int k = 0; k < rightSize; k++) {

                    // Increase memory if required
                    if (count >= capacity) {
                        capacity = capacity * 2;
                        result = realloc(result,
                                         capacity * sizeof(int));
                    }

                    if (expression[i] == '+') {
                        result[count++] =
                            leftResult[j] + rightResult[k];
                    }
                    else if (expression[i] == '-') {
                        result[count++] =
                            leftResult[j] - rightResult[k];
                    }
                    else {
                        result[count++] =
                            leftResult[j] * rightResult[k];
                    }
                }
            }

            free(leftResult);
            free(rightResult);
        }
    }

    if (count == 0) {
        result[count++] = atoi(expression);
    }

    *returnSize = count;

    return result;
}

int main() {
    char exp[] = "2*3-4*5";

    int returnSize;

    int* answer = diffWaysToCompute(exp, &returnSize);

    printf("Different results:\n");

    for (int i = 0; i < returnSize; i++) {
        printf("%d ", answer[i]);
    }

    free(answer);

    return 0;
}