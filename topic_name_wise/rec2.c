#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int fact (int x){
    int f;
    if(x==1){
        return 1;
    }
    else{
        f = x * fact(x-1);
        return f;
    }
}

void main ()
{
    int n = 4;
    int f;
    f = fact (n);
    printf("%d",f);
}
