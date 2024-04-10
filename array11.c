#include<stdio.h>
#define size 3
int main(){
    int arr[size], copy_arr[size], i, count=size;
    printf("\nArray Size is %d \n ",size);
    for(i=0;i<size;i++){
        printf("\nInsert number for array : ");
        scanf("%d",&arr[i]);
    }
    printf("\n\nCopying array in reverse order ... \n\n");
    for(i=0;i<size;i++){
        count--;
        copy_arr[count] = arr[i];
    }
    printf("\nNumbers present in copied array : \n");
   for(i=0;i<size;i++){
        printf("\nValue present at Index [ %d ] is %d\n\n", i , copy_arr[i]);
    }  
    return 0;
}
