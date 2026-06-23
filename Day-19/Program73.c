#include<stdio.h>
int main(){
    int i,j,row,col;

    printf("enter the rows and colunms");
    scanf("%d%d", &row,&col);

    int A[row][col],B[row][col],C[row][col];
    printf("enter the first matrix");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter the second matrix");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &B[i][j]);
        }
    }   
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
           C[i][j] = A[i][j] + B[i][j];
        }    
    }
    printf("Sum matrix\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }  
    return 0; 

}