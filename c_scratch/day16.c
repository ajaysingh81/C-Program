// command line argument 

// in this we will see how to pass value in main function 
// using argc and argv

// argc means argument counter 
// argv means argument vector 




#include<stdio.h>

int main(int argc, char* argv[])
{
    int number ;
    number = atoi(argv[1]);

    if(number % 2 == 0){
        printf("This number is even");
    }
    else{
        printf("this number is not even");
    }

    return 0; 
}