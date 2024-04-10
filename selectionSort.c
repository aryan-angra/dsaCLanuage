#include<stdio.h>
void selectionSort(int arr[], int size){
    int i,j,temp;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
    selectionSort(arr,size);
    return 0;
}