#include <stdio.h>
int main() {
    int a1[10], a2[10], sum[10] = {10};
    
    printf("Enter 10 elements of 1st array: ");
    for(int i = 0; i < 10; i++)
        scanf("%d", &a1[i]);
    
    printf("Enter 10 elements of 2nd array: ");
    for(int i = 0; i < 10; i++)
        scanf("%d", &a2[i]);
    
    for(int i = 0; i < 10; i++)
        sum[i] += a1[i] + a2[i];
    
    printf("Sum Array: ");
    for(int i = 0; i < 10; i ++)
        printf("%d ", sum[i]);
        
    return 0;
}
