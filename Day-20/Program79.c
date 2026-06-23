#include<stdio.h>
int main(){
    int i,j,sum,row,col,A[10][10];

    printf("enter the row and colunm :");
    scanf("%d%d",&row,&col);

    printf("enter the matrix A :\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d",&A[i][j]);
        }
    }
     for(int i=0; i<row; i++){
        sum=0;
        for(int j=0; j<col; j++){
            
            sum = sum + A[i][j];
           
        }
        printf("Sum of Row %d = %d\n",i+1,sum);
    }
    return 0;
    
}