#include<stdio.h>
int main(){
    int arr[] = {10,20,30,40,50,60};
    int i,searchNum;
    printf("\nArray : \n\n");
    for(i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n\nEnter a number to search : ");
    scanf("%d",&searchNum);
    for(i=0;i<7;i++){   
        if(searchNum == arr[i]){
            printf("\n\nNumber is present at position %d",i+1);
            break;
        }
    }
    if(i==7){
        printf("Number is not present in the array");
    }
    return 0;
}