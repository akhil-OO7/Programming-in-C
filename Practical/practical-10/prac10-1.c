#include<stdio.h>
int main(){
    int i;
    void f1();
    for(i = 1; i <= 3; i++){
        f1();
        printf(" ");
    }
    return 0;
}
void f1(){
    static int i = 0;
    i = i + 1;
    printf("%d", i);
}
