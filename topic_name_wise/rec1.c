#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int fact (int x){
    int f ,n ;
    if(n==1){
        return 1;
    }
    else{
        f = n * fact(n-1);
        return f;
    }
}

void main ()
{
    int n = 4;
    int f;
    f = fact (n);
    printf("%d",f);
    printf("my name is ajay");
}
