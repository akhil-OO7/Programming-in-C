#include <stdio.h>
int CheckPrime(int);
int main() {
    int n;
    printf("Enter a number to check if it's prime or not: ");
    scanf("%d", &n);
    if(CheckPrime(n) == 1)
        printf("The number is not Prime");
    else
        printf("The number is Prime");
    return 0;
}
int CheckPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0);
            return 1;
    }
    return 0;
}
