#include<stdio.h>
int main(){
    int min,n=6,temp;
    int arr[]={12,32,1,2,13,54};

    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    printf("Sorted array ");
    for(int i=0; i<n; i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}