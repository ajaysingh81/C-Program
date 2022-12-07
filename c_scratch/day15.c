// today i will learn preprocessor 

// preprocessor is compulsory part of the program because using the preprocessor directive  i have include the header file;

#include<stdio.h>
// #define BIRD 5
// int main(){
//     #ifdef BIRD
//         printf("BIRD = 5 \n");
//     #else
//         printf("UNKNOWN");
//     #endif
//     #undef BIRD 
//     #define BIRD 10
//         printf("BIRD = %d",BIRD);

// #define COUNT 10
// int main(){
//     #if COUNT >= 5
//         printf("Statement compiled");

//     #endif
// return 0;
//}


// #define a 10
// #define b 40

// int main(){
//     #if a==b
//     printf("Hello");
//     #elif a>b
//     printf("world");
//     #else
//     printf("coding fox");
//     #endif
// return 0;
//}


// #define greater printf("greater than other number ");
// #define lesser printf("lesser than other ");

// int main(){
//     int i = 9;
//     int j = 14;

//     if(i>j){
//         greater
//     }
//     else{
//         lesser
//     }
// }

// write a program using prepocessor for area of circle;

#define pi 3.1435

int main(){
    float area, radius;
    printf("Enter the radius of circle");
    scanf("%f",&radius);

    area = pi * radius * radius;

    printf("Area of circle is = %f", area);


}
