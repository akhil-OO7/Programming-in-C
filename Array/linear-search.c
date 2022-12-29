#include <stdio.h>
int main() {
    int arr[10], n, i, flag = 0;
    printf("Enter 10 elements of an array: ");
    for(i = 0; i < 10; i++){
       scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search for: ");
    scanf("%d", &n);
    for(i = 0; i < 10; i++){
        if (arr[i] == n){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Element found at position: %d", i + 1);
    else
        printf("Element not found.");
    return 0;
}   
