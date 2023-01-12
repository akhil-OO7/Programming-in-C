#include <stdio.h>
int main() {
    int a[100][100], r, c, i, j, sum = 0;
    printf("Enter no. of rows (<100): ");
    scanf("%d", &r);
    
    printf("Enter no. of columns (<100): ");
    scanf("%d", &c);
    
    printf("Enter elements of A matrix (%d x %d): ", r, c);
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
            
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            if(i == j)
                sum += a[i][j];
    
    printf("Sum of the diagonals of the matrix is: %d", sum);
    return 0;
}
