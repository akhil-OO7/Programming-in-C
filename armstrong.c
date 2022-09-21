#include <stdio.h>

int main() {
    int num, n = 0, sum = 0, temp, r;
    printf("Enter the number to check whether it is Armstrong: \n");
    scanf("%d", &num);
    temp = num;
    while (num != 0){
        r = num % 10;
        num /= 10;
        n++;
    }
    num = temp;
    while (num != 0){
        r = num % 10;
        sum += power(r, n);
        num /= 10;
    }
    if (sum == temp)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
int power(int base, int exponent){
    int num = 1;
    for (int i = 1; i <= exponent; i++){
        num = num * base;
    }
    return num;
}
