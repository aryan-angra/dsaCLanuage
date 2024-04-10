#include<stdio.h>
void insertionSort(int arr[],int size){
    int i;
    for(i=1;i<size;i++){
        int key = arr[i];
        int j = i-1;
        while(key<arr[j] && j>=0){
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
    for(i=0;i<size;i++){
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
    insertionSort(arr,size);
    return 0;
}