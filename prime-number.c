#include <stdio.h>
#include <math.h>

int main() {
    int num, i, flag = 0;
    printf("Enter any number: \n");
    scanf("%d", &num);
    for (i = 2; i <= sqrt(num); i++){
        if (num % i == 0){
            flag = 1;
            break;
        }    
    }
    if (flag == 1)
        printf("Not Prime");
    else
        printf("Prime");
    return 0;
}
