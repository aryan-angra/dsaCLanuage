#include<stdio.h>
#define size 3
int i,j,temp;
void selectionSort(int arr[]){
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        printf("\nSorted array is : ");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arr[size], sort_arr[size];
    printf("\nArray Size is %d \n ",size);
    for(i=0;i<size;i++){
        printf("\nInsert number for array : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        sort_arr[i] = arr[i];
    }
    selectionSort(sort_arr);
    printf("\n\nOrignal array is : ");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

/* solution 2 : 
int i ;
int arr[] = {10,20,30};
for(i=0;i<size;i++){
    printf("%d\t",arr[i]);
}

*/