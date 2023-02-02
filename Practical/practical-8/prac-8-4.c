#include<stdio.h>
struct student{
    int roll;
    char name[30];
    int age;
};
struct student s1;
struct student *ptr;
void main(){
    ptr = &s1;
    printf("Enter the Roll No, Name, Age of the Student: ");
    scanf("%d%s%d", &ptr->roll, &ptr->name, &ptr->age);
    printf("Roll No.: %d\nName: %s\nAge: %d\n", ptr->roll, ptr->name, ptr->age);
}
