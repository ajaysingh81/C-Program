#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void input(int *q){
    int i;
    for ( i = 0; i <= 4; i++)
    {
        scanf("%d",q+i);
    }
    
}
void display (int *p)
{
    int i;
    for( i = 0; i <= 4; i++)
    {
        printf("\n this is display value = %d",*(p+i));/* code */
    }
}
void main(){
    int a[5];
    input(a);
    display(a);
}
