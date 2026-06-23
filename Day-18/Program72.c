#include<stdio.h>
int main(){
    int arr[]={2,3,4,1,5,6,7,8};
    int n=8;
    int temp;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("array in descending order ");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}