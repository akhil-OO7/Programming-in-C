#include <stdio.h>
int main() {
    int arr[20], i, sumEven = 0, size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements of an array: ", size);
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < size; i++)
        if (arr[i] % 2 == 0)
            sumEven += arr[i];
    printf("Sum of even elements of array: %d", sumEven);
    return 0;
}
