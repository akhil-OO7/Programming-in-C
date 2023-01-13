#include<stdio.h>
int maxArr(int [], int);
int main(){
    int arr[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of an array: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Max element from the array is: %d", maxArr(arr, n));
}
int maxArr(int a[], int n){
    int max = a[0];
    for(int i = 1; i < n; i++)
        if(max < a[i])
            max = a[i];
    return max;
}
