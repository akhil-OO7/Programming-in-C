#include <stdio.h>
int main() {
    int a[100][100], r, c, i, j, sum = 0, T[100][100];
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
            
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            if(i == j)
                T[i][j] = a[i][j];
            else
                T[i][j] = a[j][i];
            
    printf("Transpose of the Matrix is: \n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j ++){
            printf("%d  ",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
