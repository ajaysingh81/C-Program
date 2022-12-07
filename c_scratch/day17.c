// dynamically memory allocation 


// daymamic memory allocation means memory in heap;

// beacuase you know memory has contain 4 part of allocaton place for allocate member of program 

// these for 4 part is j

// 1. Heap : in this part dynamic alloction
// 2. stack : all of the program in this stack 
// 3. global variable : for global varialble
// 4. 

#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[200];
    int rollno;
    float marks;

};

int main(){

    struct student s1;
    printf("Enter the student detail:");
    struct student* ptr;
    ptr = (struct student*) malloc (1 * sizeof(struct student));
    scanf("%s %d %f", &ptr->name, &ptr->rollno , &ptr->marks);

    printf("%s %d %f",ptr->name, ptr->rollno, ptr->marks);


    return 0;
}