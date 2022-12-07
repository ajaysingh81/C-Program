#include<stdio.h>

// array topic 
int main(){
//     int size;
//     // int arr[] = {1,2,3,4};
//     int arr[5] = {1,2,3};

//    // size = (sizeof(arr)/sizeof(arr[0]));
//     for(int i = 0; i<5; i++){
//         printf(" \narr[%d] = %d",i,arr[i]);
//     }

// add the value in array in last positon


    // int n,pos,value,arr[100];

    // printf("How many value enter in array:\n");
    // scanf("%d",&n);

    // for(int i = 0; i<n;i++){
    //     scanf("\n%d",&arr[i]);
    // }
    
    // printf("enter the postiton for add value: \n");
    // scanf("%d",&pos);
    // printf("enter the value for positon; \n");
    // scanf("%d",&value);
    // n++;
    // for(int i = 0; i<n; i++){
    //     if(i == pos-1){
    //         arr[pos-1] = value;
    //     }
    // }

    
    // for(int i= 0; i<n;i++){
    //     printf("\n arr[%d] = %d",i,arr[i]);
    // }


// simple input for the user and output:
    int n; 
    scanf("%d",&n);
    int arr[n];

    for(int i =0;i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i =0; i<n; i++){
        printf(" \n %d",arr[i]);
    }
    return 0;

}