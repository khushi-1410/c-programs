#include<stdio.h>
#include <stdlib.h>
int main(){
    int r1,c1,r2,c2;
    //first matrix of r1 x c1, and second of r2 x c2

    //taking input for first matrix
    printf("Enter r1 and c1: ");
    scanf("%d %d",&r1,&c1);
    int first[r1][c1];
    printf("\nEnter first matrix: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&first[i][j]);
        }
    }
    //input for second matrix
    printf("Enter r2 and c2 : ");
    scanf("%d %d",&r2,&c2);
    int second[r2][c2];
    printf("Enter second matrix : \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&second[i][j]);
        }
    }
    //printing matrices
    printf("First matrix :\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("second matrix :\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    //check for multiplication
    if(c1 != r2){
        printf("Matrix not multiplicable \n");
        return 0;
    }
    //multiplication
    int result[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            result[i][j] = 0;
            for(int k=0;k<r2;k++){
                result[i][j] += first[i][k] * second[k][j]; 
            }

        }
    }
    //printing multiplied matrix
    printf("Multiplied Matrix : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}