#include<stdio.h>
struct employee{
    char name[30];
    int id;
    char city[30];
};
void main(){
    struct employee e1;
    printf("Enter Name, ID, and City of the employee: ");
    scanf("%s%d%s", &e1.name, &e1.id, &e1.city);
    printf("Name: %s\nID: %d\nCity: %s", e1.name, e1.id, e1.city);
}
