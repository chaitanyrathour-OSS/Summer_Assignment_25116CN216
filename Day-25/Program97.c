#include<stdio.h>

int main(){
    int a[10],b[10],c[20];
    int n1,n2,i,j=0,k=0;

    printf("Enter the size first array:");
    scanf("%d",&n1);

    printf("enter the sorted elements:");
    for(i=0; i<n1; i++){
        scanf("%d",&a[i]);
    }
    printf("enter the size second array\n:");
    scanf("%d",&n2);

    printf("enter the elements:");
    for(i=0; i<n2; i++){
        scanf("%d",&b[i]);
    }
    for(i=0; i<n1; i++){
        while(j<n2 && b[j]<a[i]){
            c[k++]=b[j++];
        }
        c[k++]=a[i];
    }
    for(;j<n2;j++){
        c[k++]= b[j];
    }
    printf("Megerd Array:");
    for(i=0; i<k;i++){
        printf("%d",c[i]);
    }
    return 0;


}
