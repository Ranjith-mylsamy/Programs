#include <stdio.h>

#define MAX_SIZE 100

void matrixMultiplication(int arr1[][MAX_SIZE], int arr2[][MAX_SIZE], int res[][MAX_SIZE], int row, int col) {
    int i, j, k;
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            res[i][j] = 0;
            for (k = 0; k < col; k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int row, int col) {
    int i, j;
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr1[MAX_SIZE][MAX_SIZE], arr2[MAX_SIZE][MAX_SIZE], res[MAX_SIZE][MAX_SIZE];
    int i, j, row, col;
    
    printf("MATRIX MULTIPLICATION:\n");
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    
    printf("Enter the values for the first matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("Enter the values for the second matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    
    matrixMultiplication(arr1, arr2, res, row, col);
    
    printf("The result of matrix multiplication is:\n");
    printMatrix(res, row, col);
    
    return 0;
}