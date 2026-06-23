#include<stdio.h>
int main(){
    int i,j,k=0,found;
    int arr1[] = {1,2,3,4,7,6};
    int arr2[] = {2,1,3,5,4,6};
    int result[6];

    for(int i=0; i<6; i++){
        result[k]=arr1[i];
        k++;

    }
    for(int i=0; i<6; i++){
        found=0;
        for(j=0; j<6; j++){
            if(arr2[i]==result[j]){
                found=1;
                break;

            }
        }
        if(found==0){
            result[k]=arr2[i];
            k++;
        }
    }
    printf("result array");
    for(int i=0; i<k; i++){
        printf("%d",result);
    }
    return 0;
}