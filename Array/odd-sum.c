#include <stdio.h>
#include <math.h>
int main() {
    int arr[7], i, sumOdd = 0;
    printf("Enter 7 elements of array: \n");
    for(i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < 7; i++)
        if (i % 2 == 0)
            sumOdd += arr[i];
    printf("Sum of number at odd position is: %d", sumOdd);
    return 0;
}
