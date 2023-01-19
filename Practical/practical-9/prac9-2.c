#include <stdio.h>
void swap(int *, int *);
int main() {
    int a, b;
    printf("Enter two variables to swap their values: ");
    scanf("%d%d", &a, &b);
    printf("Before swapping the values are a: %d, b: %d", a, b);
    swap(&a, &b);
    printf("\nAfter swapping the values are a: %d, b: %d", a, b);
    return 0;
}
void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
