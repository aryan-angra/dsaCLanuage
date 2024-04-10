#include<stdio.h>
int main(){
    int matrix[2][3], transpose[3][2], i , j;

    printf("\nInsert elements for matrix : \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Enter number for matrix [%d] [%d] : ", i, j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\n\nOriginal Matrix : \n\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",matrix[i][j]);
            if(j==2){
                printf("\n");
            }
        }
    }

    printf("\n\nTranspose of this matrix : \n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            transpose[j][i] = matrix[i][j];
        }
    }
for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",transpose[i][j]);
            if(j==1){
                printf("\n");
            }
        }
    }  
return 0; 
}
