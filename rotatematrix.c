#include<stdio.h>
#include<stdlib.h>

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
int row,col;
int **arr=malloc(matrixSize*sizeof(int*));

for(row=0;row<matrixSize;row++){
arr[row]=malloc(matrixSize*sizeof(int*));
}

for(row=0;row<matrixSize;row++){
for(col=0;col<matrixSize;col++){
arr[col][matrixSize-1-row]=matrix[row][col];
}
}
for(row=0;row<matrixSize;row++){
for(col=0;col<matrixSize;col++){
matrix[row][col]=arr[row][col];
}
}
for(row=0;row<matrixSize;row++){
for(col=0;col<matrixSize;col++){
printf("%d ",arr[row][col]);
}
printf("\n");
}
for (int row = 0; row < matrixSize; row++) {
    free(matrix[row]);
}

}

void main(){
int size;
printf("Enter the size of the matrix:");
scanf("%d",&size);

int **matrix= malloc(size * sizeof(int *));

for(int row=0;row<size;row++){
matrix[row]=malloc(size*sizeof(int*));
}

printf("Enter the matrix elements:\n");
for(int row=0;row<size;row++){
for(int col=0;col<size;col++){
scanf("%d ",&matrix[row][col]);
}
}
rotate(matrix,size,NULL);
for (int row = 0; row < size; row++) {
    free(matrix[row]);
}

    free(matrix);
}
