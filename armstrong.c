#include <stdio.h>
#include <math.h>

int main() {
    int num, digit, sum = 0, temp, r;
    printf("Enter any number: \n");
    scanf("%d", &num);
    temp = num;
    digit = count(num);
    printf("%d", digit);
    while (num != 0){
        r = r % 10;
        num = num / 10;
        sum = sum + power(r, digit);
    }
    printf("%d", sum);
    if (temp == sum)
        printf("Number is Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
int power(int num, int expo){
    int ans = 1;
    for (int i = 1; i <= expo; i++){
        ans =  ans * num; 
    }
    return ans;
}
int count(int a){
    int r, c = 0;
    while (a != 0){
        r = a % 10;
        a = a / 10;
        c++;
    }
    return c;
}
