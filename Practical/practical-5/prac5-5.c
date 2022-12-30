#include <stdio.h>
int main() {
    int arr[10], size, num, flag = 0, i, tmp;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements of an array: ", size);
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    for(i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    printf("Sorted array is: ");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
