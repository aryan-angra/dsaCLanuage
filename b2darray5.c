#include<stdio.h>
int main(){
    int matrix[4][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };
    int copiedMatrix[4][4], i , j;

    printf("\n\nOriginal Matrix : \n\n");
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t", matrix[i][j]);
            if(j==3){
                printf("\n");
            }
        }
    }

    printf("\nCopying matrix...\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            copiedMatrix[i][j] = matrix[i][j];
        }
    }

    
    printf("\n\nCopied Matrix : \n\n");
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t", copiedMatrix[i][j]);
            if(j==3){
                printf("\n");
            }
        }
}
    return 0;
}