#include <stdio.h>
int main() {
    int arr[10], size, sum = 0;
    printf("Enter size of an array (<11): ");
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < size; i++)
        sum += arr[i];
    printf("Sum of the entered elements is: %d", sum);
    return 0;
}
