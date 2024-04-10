#include<stdio.h>
void bubbleSort(int arr[], int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0;i<size; i++){
        printf("%d\t",arr[i]);
    }
}
int main(){ 
    int arr[20],i, size;
    printf("Enter the size of array (max. 20) : ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Insert number : ");
        scanf("%d",&arr[i]);
    }
    printf("\nSorting array...\n");
  bubbleSort(arr,size);
    return 0;
}