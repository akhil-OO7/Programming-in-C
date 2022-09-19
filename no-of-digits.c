#include <stdio.h>
#include <math.h>

int main() {
    int num, r, count = 0;
    printf("Enter any number: \n");
    scanf("%d", &num);
    while (num != 0){
        r = num % 10;
        num = num / 10;
        count++;
    }
    printf("No. of digits are: %d", count);
    return 0;
}
