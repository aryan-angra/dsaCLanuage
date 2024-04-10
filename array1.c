#include<stdio.h>
#define size 5
int main(){
    int arr[size],i, max_value;
    printf("\nArray Size is 5 \n ");
    for(i=0;i<size;i++){
        printf("\nInsert number : ");
        scanf("%d",&arr[i]);
    }
    for(i=1;i<size;i++){
        if(arr[0]<arr[i]){
            arr[0] = arr[i];
        }
    }
    printf("\nMaximum Value present in the array is : %d", arr[0]);
    return 0;
}
