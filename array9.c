#include<stdio.h>
#define Arr1_size 2
#define Arr2_size 2
#define mergedSize Arr1_size+Arr2_size

int main(){
    int arr1[Arr1_size], arr2[Arr2_size], i , j , mergedArray[mergedSize];
    
    // insert array-1 elements
    printf("\n\nInsert numbers for array 1 whose size is %d\n\n", Arr1_size);
    for(i=0;i<Arr1_size;i++){
        printf("Insert number : ");
        scanf("%d",&arr1[i]);
    }

    // insert array-2 elements
    printf("\n\nInsert numbers for array 2 whose size is %d\n\n", Arr2_size);
    for(i=0;i<Arr2_size;i++){
        printf("Insert number : ");
        scanf("%d",&arr2[i]);
    }
  
    // merging into array 3

    for(i=0;i<Arr1_size;i++){
        mergedArray[i] = arr1[i];
    }
    for(i=0,j = Arr1_size; j < mergedSize && i < Arr2_size;i++, j++){
        mergedArray[j] = arr2[i];
    }

    printf("\n\nMerging Array..\n\n");
    for(i=0;i<mergedSize;i++){
        printf("%d\t", mergedArray[i]);
    }
    return 0 ;
}