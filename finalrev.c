#include<stdio.h>
#define arrSize 5
int i,j,temp;
void selectionSort(int arr[]){
    for(i=0;i<arrSize;i++){ 
        for(j=i+1;j<arrSize;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nSorted\n");
    for(i=0;i<arrSize;i++){
        printf("%d\t",arr[i]);
    }
}
void bubble(int arr[]){
    for(i=0;i<arrSize-1;i++){ 
        for(j=0;j<arrSize-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\nSorted\n");
    for(i=0;i<arrSize;i++){
        printf("%d\t",arr[i]);
    }
}
void insertionSort(int arr[]){
    
}
int main(){
    printf("Size allowed in array : %d\n", arrSize);
    int arr[arrSize];
    for(i=0;i<arrSize;i++){
        printf("Enter number : ");
        scanf("%d",&arr[i]);
    }
    // bubble(arr);
    // selectionSort(arr);
    insertionSort(arr);
    return 0;
}