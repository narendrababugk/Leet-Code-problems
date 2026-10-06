#include<stdio.h>
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    int row[200] = {0};
    int column[200] = {0};
  
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (matrix[i][j] == 0) {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        if (row[i] == 1) {

            for (int j = 0; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }
    for (int j = 0; j < cols; j++) {
        if (column[j] == 1) {

            for (int i = 0; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }
    
}
void main() {

    int rows = 3;
    int cols = 3;

    int a[3][3] = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    int* matrix[3];

    for (int i = 0; i < rows; i++) {
        matrix[i] = a[i];
    }

    int matrixColSize[1] = {cols};

    setZeroes(matrix, rows, matrixColSize);
    printf("Matrix after setting zeroes:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}