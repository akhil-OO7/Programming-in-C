#include<stdio.h>
int main(){
    extern x; //global variable
    x = 5;
    void f1(), f2();
    printf("%d\n", x);
    f1(), f2();
    return 0;
}
void f1(){
    extern x;
    x = x + 10;
    printf("%d\n", x);
}
void f2(){
    extern x;
    x = x + 10;
    printf("%d\n", x);
}
int x;
