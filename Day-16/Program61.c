#include<stdio.h>
int main(){
    int n,sum=0,totalSum,missing;
    printf("enter the number :");
    scanf("%d", &n);

    int arr[n-1];
    printf("enter %d elements", n-1);
    

    for(int i=0; i<n-1; i++){
        scanf("%d",&arr[i]);
        sum = sum+arr[i];

    }
    totalSum = n*(n+1)/2;
    missing = totalSum - sum;

    printf("missing number= %d",missing);
    return 0;

}