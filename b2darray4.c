#include<stdio.h>
int main(){
    int arr1[4][4], arr2[4][4], result[4][4], i , j;
    // take user input for matrics : 
    printf("\n\nMatrix 1 consists of 4 rows and 4 columns\n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("enter arr1[%d][%d] : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }

  // take user input for matrics 2 : 
    printf("\n\nMatrix 2 consists of 4 rows and 4 columns\n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("enter arr2[%d][%d] : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("\n\nSubtracting Matrix 2 from  Matrix1\n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d\t", result[i][j]);
        }
    }
    return 0;
}