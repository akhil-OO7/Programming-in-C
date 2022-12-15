#include <stdio.h>
int add(int);
int main() {
    int n;
    printf("Enter the value of n to calculate (1 + 2 + 3 + ... + n): ");
    scanf("%d", &n);
    printf("%d ", add(n));
    return 0;
}
int add(int n){
    if (n == 1)
       return 1;
    return (n + add(n-1));
}
