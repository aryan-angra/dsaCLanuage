#include<stdio.h>
#define size 3
int main(){
    int arr[size],i, min_value;
    printf("\nArray Size is 3 \n ");
    for(i=0;i<size;i++){
        printf("\nInsert number : ");
        scanf("%d",&arr[i]);
    }
    for(i=1;i<size;i++){
        if(arr[0]>arr[i]){
            arr[0] = arr[i];
        }
    }
    printf("\nMinimum Value present in the array is : %d", arr[0]);
    return 0;
}
