#include<stdio.h>
int main(){
    int arr[50],n,sum,i,j;

    printf("enetr the size of array");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(int i=0;i<n;i++) {
       scanf("%d",&arr[i]);
    }

    printf("enter the sum :");
    scanf("%d",sum);

    for(int i = 0; i < n; i++) {
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum) {

                printf("pair found %d\n & %d\n",arr[i],arr[j]);
            }
        }
    }

    return 0;
}