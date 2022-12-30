#include <stdio.h>
int main() {
    int arr[20], size, copy[20], i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements of an array: ", size);
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for(int j = size - 1, i = 0; j >= 0; j--, i++)
        copy[i] = arr[j];
    printf("Reversed array is: ");
    for(i = 0; i < size; i++)
        printf("%d ", copy[i]);
        
    return 0;
}
        
