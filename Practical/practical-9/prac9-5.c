#include <stdio.h>
int main() {
    int a[50], n, *p = NULL, i, num , flag = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    p = a;
    printf("Enter %d values of the array: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", (p + i));
    printf("Enter the number you want to search for: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++)
        if(num == *(p + i)){
            flag = 1;
            break;
        }
    if(flag == 1)
        printf("Number found at position: %d", i + 1);
    else
        printf("Number not found");
    return 0;
}
