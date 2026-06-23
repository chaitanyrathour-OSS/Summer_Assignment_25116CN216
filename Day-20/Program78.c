#include<stdio.h>
int main(){
    int i,j,A[10][10],n,z=1;

    printf("enter the size matrix :");
    scanf("%d", &n);

    printf("enter the matrix A :");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(A[i][j] !=A[j][i]){
                z=0;
                break;
            }
        }
    }
    if(z){
        printf("Symmetric Matrix");

    }else{
        printf("Not Symmetric Matrix");
    }
    return 0;
}