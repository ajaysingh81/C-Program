#include<stdio.h>
char* reverse(char*);
int length(char *);

int main(){
    printf("%d",length("Computer"));
    printf("\n%s",reverse("computer"));
}
char* reverse(char *p){
    int i,l;
    char t;
    for(i=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        t = *(p+i);
        *(p+i)= *(p+l-1-i);
        *(p+l-1-i)=t;
    }
    return(p);
}
int length(char *p){
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return(i);
}