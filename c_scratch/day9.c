#include<stdio.h>
#include<string.h>

int main()
{

// concatenate the string 
    // char str1[20] = "SQL";
    // char str2[20] = "PLUS";

    // strcat(str1, str2);

    // printf("%s",str1);
    // printf("\n %s",str2);


// compare the string;

    // char str1[] = "AJAY";
    // // char str2[] = "SINGH";
    // char str2[] = "AJAY";

    // if(strcmp(str1 , str2) == 0){
    //     printf("The string are same");
    // }
    // else{
    //     printf("The string are not same");
    // }

// wap the program string is palandrome or not ;

    char str[20],temp[20]="";
    int n,k=0 ,i,count;
    printf("Enter any string:-");
    gets(str);
    // for calulate length;
    n = strlen(str);
    // for copy reverse string in other;
    for(int i = n-1; i>=0; i--)
    {
        temp[k] = str[i];
        k++;
    }
    // reverse
    printf("\n \n%s",temp);
    // for comparision
    // if(strcmp(str,temp)== 0){
    //     printf("palindrome");
    // }
    // else{
    //     printf("not palindrome");
    // }

   
    count = 0;
    int l = n-1;
    while(l>=0){
        if(str[l] == temp[l]){
            count++; 
          
        }
         l--;
        
    }
    
    if(count == n){
        printf("\npalindrome");

    }
    else{
        printf("\nnot palidrome");
    }

// copy the string

    // char str1[] = "ajay";
    // char str2[10];

    // strcpy(str2,str1);

    // printf("%s",str2);

// wp to calculate string lenth\

// // using for loop;
//     int count =0,n;
//     char str[20] = "Ajay singh";

//     for(int i =0; str[i] != '\0'; i++ )
//     {
//         count++;
//     }

//     printf("%d",count);

// // using library function;
//     n = strlen(str);

//     printf("\n %d",n);



}