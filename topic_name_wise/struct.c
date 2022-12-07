#include <stdlib.h>
#include <stdio.h>

struct date
{
    int a, b, c;

};

int main()
{
     
    struct date today;
    today.a = 26;
    today.b = 03;
    today.c = 2022;
    printf("today is %d/%d/%d",today.a,today.b,today.c);
    
    return 0;
}