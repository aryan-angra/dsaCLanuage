#include<stdio.h>
#define size 5
int main(){
    int arr1[size], arr2[size], i, count=0;

    // insert array-1 elements
    printf("\n\nInsert numbers for array 1 whose size is %d\n\n",size);
    for(i=0;i<size;i++){
        printf("Insert number : ");
        scanf("%d",&arr1[i]);
    }

    // insert array-2 elements
    printf("\n\nInsert numbers for array 2 whose size is %d\n\n",size);
    for(i=0;i<size;i++){
        printf("Insert number : ");
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<size;i++){
        if(arr1[i] == arr2[i]){
            count++;
        }
    }
    
    if(count == size){
        printf("\nBoth array 1 and array 2 are same\n");
    }
    else{
        printf("\nArrays are not same\n");
    }
    return 0;
}