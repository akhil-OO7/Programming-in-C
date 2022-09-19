#include <stdio.h>
#include <math.h>

int main() {
    int b, p, ans = 1;
    printf("Enter any number: \n");
    scanf("%d", &b);
    printf("Enter it's power: \n");
    scanf("%d", &p);
    for (int i = 1; i <= p; i++){
        ans =  ans * b; 
    }
    printf("Answer is: %d", ans);
    return 0;
}
