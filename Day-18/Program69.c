#include<stdio.h>
int main(){
    int n=7, temp;
    int arr[]={2,3,43,11,5,65,31};
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array ");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}