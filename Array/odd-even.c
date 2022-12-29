#include <stdio.h>
int main() {
    int arr[10], i, j, k, odd[10], even[10];
    printf("Enter 10 elements of array: \n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0, j = 0, k = 0; i < 10; i++){
        if (arr[i] % 2 == 0){
            even[j] = arr[i];
            j++;
        }
        else{
            odd[k] = arr[i];
            k++;
        }
    }
    printf("Odd Array is: ");
    for(i = 0; i < k; i++)
        printf("%d ", odd[i]);
    
    printf("\nEven Array is: ");
    for(i = 0; i < j; i++)
        printf("%d ", even[i]);
        
    return 0;
}
