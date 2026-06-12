#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the square of size :"); //ask user for the size of square
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for (j=1; j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                    printf("*"); //print * for boundaries
            }   else{
                printf(" ");
            }  
        }  
        printf("\n"); 
        }
        return 0;
        
    }