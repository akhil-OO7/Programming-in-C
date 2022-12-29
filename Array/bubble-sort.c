#include <stdio.h>
int main() {
    int arr[10], i , j, tmp;
    printf("Enter 10 elements of an array: ");
    for(i = 0; i < 10; i++){
       scanf("%d", &arr[i]); 
    }
    for(i = 0; i < 9; i ++){
        for(j = 0; j < 9 - i; j++){
            if(arr[j] > arr[j + 1]){
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }   
        }
    }
    printf("Sorted Array is: ");
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}   
