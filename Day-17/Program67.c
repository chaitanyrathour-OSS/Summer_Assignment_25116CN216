#include<stdio.h>
int main(){
    int i,j;
    int arr1[]={1,2,3,4,7};
    int arr2[]={3,4,5,7,1,9};

    for(int i=0; i<5; i++){
        for(int j=0; j<6; j++){
            if(arr1[i]==arr2[j]){
                printf("%d\t",arr1[i]);
                break;
            }
        }
    }
}