#include <stdio.h>

int main()
{
    int roll;
    char name[25];
    FILE *fp;

    printf("enter your name and roll :-");
    scanf("%s %d",&name, &roll);
   
    fp = fopen("ajay.txt","a");

    fprintf(fp,"%s %d \n",name,roll);

    fclose(fp);
    fp = fopen("ajay.txt","r");
    while(fscanf(fp,"%s %d",&name,&roll) != EOF){
        printf("%s %d \n",name,roll);
    }
    fclose(fp);

    return 0;

}