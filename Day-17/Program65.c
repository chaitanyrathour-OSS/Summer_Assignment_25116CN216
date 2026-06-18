#include<stdio.h>
int main(){
    
    int arr1[] = {1,2,3,7};
    int arr2[] ={1,0};
    int arr3[6];
    int i,j=0;

    for(int i=0; i<4; i++){
        arr3[j]=arr1[i];
        j++;
    }
     for(int i=0; i<4; i++){
        arr3[j]=arr2[i];
        j++;
     }
     printf("Merged array :");
     for(int i=0; i<4; i++){
        printf("%d",arr3[i]);
     }
     return 0;
}
