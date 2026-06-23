#include<stdio.h>
int main(){
    int i,j,row,col;

    printf("enter the row and colunm :");
    scanf("%d%d", &row,&col);

    int A[row][col],B[col][row];

    printf("enter the matrix A :");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            B[j][i]=A[i][j];
        }
    }
      printf("Transpose Matrix\n");
      for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d\t",B[i][j]);

        }
        printf("\n");
    }
    return 0;
    
}