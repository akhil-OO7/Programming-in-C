#include <stdio.h>
int main() {
    int a[50], n, *p = NULL, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    p = &a;
    printf("Enter %d values of the array: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", (p + i));
    printf("Entered values of the array are: ");
    for(i = 0; i < n; i++)
        printf("%d ", *(p + i));
    return 0;
}
