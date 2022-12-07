#include<stdio.h>
#include<string.h>
int main()
{ 
// take input from user with out space;
    // char s[20];
    // printf(" \n Enter full name :-");
    // scanf("%s",s);
    // printf("Your name is :- %s",s);

// string declaration and initilization
    // char s[] = "c or c++";

    // printf("Your choice is :- %s",s);


// 2nd way to declaration and initilization;

    // char s[] = {'a','j','a','y','\0'};

    // printf("string is = %s",s);

// wap to take string with space and print all string;

    // char string[25];
    // // input
    // printf("Enter your name:-");
    // gets(string);
    // // output using puts
    // // printf("your name is :- ");
    // // puts(string);
    
    // // output using %s;
    // printf("your name is:- %s",string);

// wap to convert lower case string to uppercase string;

    char string[50];

    int i;
    printf("Enter a string in lowercase:-");
    scanf("%s",string);
// using for loop 
    // for (i=0; string[i] != '\0'; i++)
    // {
       
    //     string[i] = string[i] -32;
    // }
   
// usig while loop   
    // while (string[i] != '\0')
    // {
    //     string[i] = string[i] -32;
    //     i++;
    // }
    
    printf("uppercase string :- %s",string);
    

    return 0;
}