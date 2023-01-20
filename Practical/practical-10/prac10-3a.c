#include<stdio.h>
int a; //external/global variable
int main(){
    a = 10;
    void f1(), f2(), f3();
    f1();
    printf("%d\n", a);
    f2();
    printf("%d\n", a);
    f3();
    printf("%d", a);
}
void f1(){
    a = a + 10;
}
void f2(){
    a = a + 20;
}
void f3(){
    a = a + 30;
}
