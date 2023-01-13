#include <stdio.h>
void swap(int, int);
int main() {
    int a, b;
    printf("Enter two numbers a and b: ");
    scanf("%d%d", &a, &b);
    printf("Value of a = %d and b = %d", a, b);
    swap(a, b);
    return 0;
}
void swap(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
    printf("\nAfter swapping value of a = %d and b = %d", a, b);
}
