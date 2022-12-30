#include <stdio.h>
int min(int, int);
int max(int, int);
int main() {
    int arr[10], maxArr = -99999, minArr = 99999;
    
    printf("Enter 10 elements of an array: ");
    for(int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    
    for(int i = 0; i < 10; i ++){
        maxArr = max(arr[i], maxArr);
        minArr = min(arr[i], minArr);
    }
    
    printf("Minimum Element: %d\nMaximum Element: %d", minArr, maxArr);
    return 0;
}
int min(int a, int b){
    if (a < b)
        return a;
    else
        return b;
}
int max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}
