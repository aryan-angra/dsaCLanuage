#include<stdio.h>
#define size 3
int main(){
    int arr[size], copy_arr[size], i;
    printf("\nArray Size is 3 \n ");
    for(i=0;i<size;i++){
        printf("\nInsert number for array 1: ");
        scanf("%d",&arr[i]);
    }
    printf("\n\nCopying array 1 numbers ... \n\n");
    for(i=0;i<size;i++){
        copy_arr[i] = arr[i];
    }
    printf("\nNumbers present in copied array : \n");
   for(i=0;i<size;i++){
        printf("%d\t",copy_arr[i]);
    }
    
    return 0;
}
