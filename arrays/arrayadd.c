#include <stdio.h>

int main() {
    
    int matrixA[3][3], matrixB[3][3], sum[3][3];
    
    printf("=== Matrix Addition ===\n\n");
    

    printf("Enter elements for Matrix A (3x3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }
    
    printf("\nEnter elements for Matrix B (3x3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }
    
    
    printf("\nMatrix A:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%4d ", matrixA[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\nMatrix B:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%4d ", matrixB[i][j]);
        }
        printf("\n");
    }
    
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    
    
    printf("\nSum (A + B):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%4d ", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}