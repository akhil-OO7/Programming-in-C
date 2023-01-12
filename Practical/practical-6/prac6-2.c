#include <stdio.h>
int main() {
    int a[10][10], b[10][10], n, sum[10][10], mul[10][10];
    printf("Enter the size of 2 matrices (n x n): ");
    scanf("%d", &n);
    
    printf("Enter elements of A matrix (%d x %d): ", n, n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j ++)
            scanf("%d", &a[i][j]);
            
    printf("Enter elements of B matrix (%d x %d): ", n, n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j ++)
            scanf("%d", &b[i][j]);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum[i][j] += a[i][j] + b[i][j];
        }
    }
    printf("Sum of A + B =  \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            mul[i][j] = 0;
            for(int k = 0; k < n; k++){
                mul[i][j] += a[i][k] * b[k][j]; 
            }
        }
    }
    printf("Product of A * B = \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
