#include<stdio.h>
int main(){
    int arr[50],n,i,j,k;

    printf("enter the size of array :");
    scanf("%d",&n);

    printf("enter array elements :");
    for(int i=0;i<0;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                for(k=j;k<n;k++){
                    arr[k]=arr[k+1];

                }
                n--;
                j--;
            }
        }
    }
    printf("array after removing duplicates :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}