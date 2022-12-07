#include <conio.h>
#include <stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[20];
    int age;
    char add[30];
};
struct student input();
void display(struct student a);
int main()
{
    struct student d;
    d = input();
    display(d);
    return 0;
}
struct student input()
{
    struct student s;

    printf("enter your roll number :-");
    scanf("%d",&s.rollno);

    printf("enter your name :-");
    scanf("%s",&s.name);

    printf("Enter you age :-");
    scanf("%d ",&s.age);

    printf("Enter your address:-");
    scanf("%s",&s.add);

    return(s);
}
void display(struct student a)
{
    printf("%d \n", a.rollno);
    printf("%s \n", a.name);
    printf("%d\n", a.age);
    printf("%s\n", a.add);
}