#include<stdio.h>
struct employee{
    int empid;
    char name[30];
    struct salary{
        int basic_pay;
        int hra;
        int da;
    }a;
};
void main(){
    struct employee e1;
    printf("Enter the ID, Name, Basic Pay, HRA, DA of the employee: ");
    scanf("%d%s%d%d%d", &e1.empid, &e1.name, &e1.a.basic_pay, &e1.a.hra, &e1.a.da);
    printf("ID: %d\nName: %s\nBasic Pay: %d\nHRA: %d\nDA: %d\n", e1.empid, e1.name, e1.a.basic_pay, e1.a.hra, e1.a.da);
}
