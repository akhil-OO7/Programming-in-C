#include <stdio.h>
int min(int, int);
int max(int, int);
int main() {
    int arr[10], size, num, flag = 0, i;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements of an array: ", size);
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    printf("Enter the elements to find it's position: ");
    scanf("%d", &num);
    
    for(i = 0; i < size; i++)
        if(arr[i] == num){
            flag = 1;
            break;
        }
        
    if (flag == 1)
        printf("Element found at %d position", i + 1);
    else
        printf("Element not found.");
 
    return 0;
}
