#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){

// somle program for testing the compiler:
    // int a; 
    // printf("Enter the value of a:  ");
    // scanf("%d",&a);

    // printf("\n the value of  a is %d",a);

// Write a C++ program to reverse a given string

    // char a[50];
    // // char revs;
    // printf("\n enter the string for reverse:");

    // scanf("%[^\n]s",a);
  // first way of solve the question for using strlen function;
    // revs = strrev(a);

    // printf("%s",a);

  // 2nd way is using the for loop
    // int l = strlen(a);

    // for(int i = l ; i >= 0; i--){

    //     printf("%c",a[i]);

    // }

  // 3rd way 

    // printf("%s",strrev(a));

// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).

    char a[50];

    printf ("Enter a string :");
    scanf("%[^\n]s",a);

    // for(int i= 0 ; a[i] != 0; i++){
    //     if(a[i] == 'a'){
    //          a[i] = 'b';
    //      printf("%c",a[i]);
    //     }
    //     else if(a[i] == 'p'){
    //         a[i] = 'q';
    //          printf("%c",a[i]);
    //     }
    //     else if(a[i] == 'z'){
    //         a[i] = 'a';
    //          printf("%c",a[i]);
    //     }
    //     else{
    //         printf("%c",a[i]);
    //     }
    // }

    // 2 nd way is;

    // for(int i = 0 ; a[i] != '\0'; i++){
    //     printf("%c",a[i]+1);
    // }
     

//  Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space
    
    
    // for(int i = 0 ; a[i] != '\0'; i++){
    //     if(i == 0 || a[i-1] == ' '){
    //         printf("%c",a[i] -32 );
    //     }
    //     else
    //     printf("%c",a[i]);
    // }


//Write a C++ program to find the largest word in a given string    
    int i =0;
    int count = 0;
    int l = strlen(a);
    char temp[50];
    while(l !=0){
      
      if(i = 0 || a[i-1] == ' '){
        count ++;
        temp[i] = a[i];
      }
      // if(count < temp)
      // count = 0;
      
    }
    printf("%s",temp);
    return 0;
   

}