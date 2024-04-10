#include<stdio.h>
int main(){
    int arr[20],i,size;
    printf("Enter the count of number to convert : ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
    printf("Enter number : ");
    scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        printf("%c",arr[i]);
    }
    return 0;
}