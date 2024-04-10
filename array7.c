#include<stdio.h>
#define size 6

int binarySearch(){
    int arr[size], searchNum, lower = 0, upper, midValue, i , j, temp;
    printf("\nSize of Array is %d\n\n", size);
    // Insert element
    for(i=0;i<size;i++){
        printf("Insert num : ");
        scanf("%d",&arr[i]);
    }
    // Sorting the array using selection sort
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array : ");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the number you want to search :  ");
    scanf("%d", &searchNum);
    upper = size-1;
    while(lower <=upper){
        midValue = lower+(upper-lower)/2;
        for(i=0;i<size;i++){
            if(searchNum == arr[midValue]){
                printf("\n\nNumber is present at position %d", midValue + 1);
                return 0;
            }
            else if(searchNum > arr[midValue]){
                lower = midValue+1;
            }
            else if(searchNum < arr[midValue]){
                upper = midValue-1;
            }
            else{
                return -1;
            }
        }
    }
}
int main(){
    int output = binarySearch();
    if(output ==0){
        printf("Num found");
    }
    else{
        printf("Num not found");
    }
    return 0;
}