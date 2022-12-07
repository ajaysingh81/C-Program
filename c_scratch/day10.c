// wap to print reverse of any string

#include<stdio.h>
#include<string.h>

int main(){

    char str[20];
    int l,k;
    printf("\nEnter any String: -");
    gets(str);

    l = strlen(str);
    printf("\n%d",l);
   // k = l-1;
    while(l>=0){
        printf("%c",str[l]);
        l--;
    }
    return 0;

}