#include <stdio.h>
#include <math.h>

int main() {
    int num, r, sum = 0;
    printf("Enter any number:\n");
    scanf("%d", &num);
    while(num != 0){
        r = num % 10;
        sum = sum * 10 + r;
        num = num / 10;
    }
    printf("Sum of the digits is: %d", sum);
    return 0;
}
