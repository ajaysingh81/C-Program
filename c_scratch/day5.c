#include<stdio.h>

int main()
{
// wap to multiply to integer without using multiply operator;
//    int a, b, i,result = 0;
//     printf("Enter two integer for multiply: \n");
//     scanf("%d %d",&a,&b);
//     for(i = 1; i<=b; i++)
//     { 
//         result = result+a;
//     }
//     printf("%d * %d = %d",a,b,result);
    

// WAP TO USE of switch case 

    // int n;
    // printf("Enter your roll number:-");
    // scanf("%d",&n);

    // switch(n){
    //     case 1:
    //     printf("I am ajay");
    //     break;
    //     case 2:
    //     printf("i am vijay");
    //     break;
    //     case 3:
    //     printf("I am maan");
    //     break;
    //     default:
    //     printf("out of roll number");
    // }
    
// use the break and continue statement in any program ;

    int n ;
    printf("enter any number");
    scanf("%d",&n);
    for(int i = 0; i<n ; i++){
        if(i == 3 ){
           /// printf("\nbreak statemnet");
           // break;
           printf("\ncontinue statement");
           continue;
        }
        printf(" \n i  = %d",i);
    }
    return 0;
    
}