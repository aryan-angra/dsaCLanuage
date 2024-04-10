#include<stdio.h>
#define size 5
int main(){
    int arr[size],i;
    printf("\nArray Size is 5 \n ");
    for(i=0;i<size;i++){
        printf("\nInsert number : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        printf("\nValue present at Index [ %d ] is %d\n", i , arr[i]);
    }
    return 0;
}
