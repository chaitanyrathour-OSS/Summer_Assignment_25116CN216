#include<stdio.h>
int main(){
    int i,j,n,sum=0;

    printf("enter the size of matrix :");
    scanf("%d",&n);

    int A[n][n];

    printf("Enter the matrix A :");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&A[i][j]);
        }
    }
      for(int i=0; i<n; i++){
        sum +=A[i][i];
      }
      printf("Diagonal sum = %d",sum);
     return 0;
}