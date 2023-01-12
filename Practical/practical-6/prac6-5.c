#include <stdio.h>
int main() {
    int a[100][100], r, c, i, j, rSum = 0, cSum = 0, T[100][100];
    printf("Enter no. of rows (<100): ");
    scanf("%d", &r);
    
    printf("Enter no. of columns (<100): ");
    scanf("%d", &c);
    
    printf("Enter elements of a (%d x %d) Matrix: ", r, c);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j ++)
            scanf("%d", &a[i][j]);
    
    printf("Entered Matrix is: \n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j ++){
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
            
    for(i = 0; i < r; i++){
        rSum = 0;
        for(j = 0; j < c; j++){
            rSum += a[i][j];
        }
        printf("Row %d sum: %d\n", r + 1, rSum);
    }        
    for(i = 0; i < r; i++){
        cSum = 0;
        for(j = 0; j < c; j++){
            cSum += a[j][i];
        }
        printf("Col %d sum: %d\n", c + 1, cSum);
    }
    return 0;
}
