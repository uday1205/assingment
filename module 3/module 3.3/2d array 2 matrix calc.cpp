#include <stdio.h>

#define SIZE 3

// Function to add two matrices
void addMatrices(int mat1[][SIZE], int mat2[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int mat1[][SIZE], int mat2[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int mat1[][SIZE], int mat2[][SIZE], int result[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display matrix
void displayMatrix(int mat[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[SIZE][SIZE] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};
    int matrix2[SIZE][SIZE] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};
    int result[SIZE][SIZE];

    printf("Matrix 1:\n");
    displayMatrix(matrix1);
    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    printf("\nAddition:\n");
    addMatrices(matrix1, matrix2, result);
    displayMatrix(result);

    printf("\nSubtraction:\n");
    subtractMatrices(matrix1, matrix2, result);
    displayMatrix(result);

    printf("\nMultiplication:\n");
    multiplyMatrices(matrix1, matrix2, result);
    displayMatrix(result);

    return 0;
}

