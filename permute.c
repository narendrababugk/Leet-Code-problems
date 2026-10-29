#include <stdio.h>
#include <stdlib.h>
int** permute(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
       int total = 1;

    for (int i = 1; i <= numsSize; i++) {
        total *= i;
    }

    int** result = malloc(total * sizeof(int*));

    *returnColumnSizes = malloc(total * sizeof(int));
    *returnSize = 0;

    int* temp = malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        temp[i] = nums[i];
    }

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (temp[i] > temp[j]) {
                int x = temp[i];
                temp[i] = temp[j];
                temp[j] = x;
            }
        }
    }

    for (int count = 0; count < total; count++) {

        result[*returnSize] = malloc(numsSize * sizeof(int));

        for (int i = 0; i < numsSize; i++) {
            result[*returnSize][i] = temp[i];
        }
        (*returnColumnSizes)[*returnSize] = numsSize;
        (*returnSize)++;

        int i = numsSize - 2;
        while (i >= 0 && temp[i] >= temp[i + 1]) {
            i--;
        }

        if (i < 0) {
            break;
        }

        int j = numsSize - 1;
        while (temp[j] <= temp[i]) {
            j--;
        }

        int x = temp[i];
        temp[i] = temp[j];
        temp[j] = x;

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            x = temp[left];
            temp[left] = temp[right];
            temp[right] = x;

            left++;
            right--;
        }
    }

    free(temp);

    return result;
}
int main() {
    int nums[] = {0, -1, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int returnSize;
    int* returnColumnSizes;

    int** result = permute(nums, numsSize, &returnSize,&returnColumnSizes);

    printf("Permutations:\n");

    for (int i = 0; i < returnSize; i++) {
        printf("[");

        for (int j = 0; j < returnColumnSizes[i]; j++) {
            printf("%d", result[i][j]);

            if (j < returnColumnSizes[i] - 1) {
                printf(", ");
            }
        }

        printf("]\n");
    }


    for (int i = 0; i < returnSize; i++) {
        free(result[i]);
    }

    free(result);
    free(returnColumnSizes);

    return 0;
}