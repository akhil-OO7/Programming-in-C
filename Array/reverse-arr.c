#include <stdio.h>
#include <math.h>
int main() {
    int arr[7], i, j, copy[7];
    printf("Enter 7 elements of array: \n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    i--;
    for(j = 0; j < 7; j++, i--)
        copy[j] = arr[i];
    for(i = 0; i < 7; i++)
        printf("%d ", copy[i]);
    return 0;
}
