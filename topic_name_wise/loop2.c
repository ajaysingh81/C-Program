#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float static sum = 0.0; 
    float j = 1.0, i = 2.0;
    while(i/j>0.0625){
        sum = sum +i/j;
        printf("%f \n",sum);
        j = j + j;
    }
    return 0;

}