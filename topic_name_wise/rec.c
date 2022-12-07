#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


 void main(){
     static int i = 4;
     if (--i){
         main();
         printf("%d",i);
     }
 }
