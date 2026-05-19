#include <stdio.h>

int main() {
    
    int matrix[3][3], transpose[3][3];
    
    printf("=== Matrix Transpose ===\n\n");
    
    
    printf("Enter elements for Matrix (3x3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    
    printf("\nOriginal Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
    
    printf("\nTranspose Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%4d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}