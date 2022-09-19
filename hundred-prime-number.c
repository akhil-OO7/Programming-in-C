#include <stdio.h>
#include <math.h>

int main() {
    int num, i, j, flag, count = 0;
    printf("First 100 prime numbers are: \n");
    for (j = 1; count <= 100; j++){
        flag = 0;
        for (i = 2; i <= sqrt(j); i++){
            if (j % i == 0){
                flag = 1;
                break;
            }    
        }
        if (flag == 0){
            printf("%d ", j);
            count++;
        }
    }
    return 0;
}
