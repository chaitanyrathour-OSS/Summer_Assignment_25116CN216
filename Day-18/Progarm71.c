#include<stdio.h>
int main(){
    int n=7,min=0,max=n-1,mid;
    int arr[]={1,7,3,2,1,3,0};
    int key=0;
    int found=0;
    while(min<=max){
        int mid=(min+max)/2;
        if(arr[mid]==key){
            found=1;
            break;
        }
        else if(key<arr[mid]){
            max=mid-1;
        }
        else{
            min=mid+1;
        }

    }
    if(found){
        printf("elements found at position %d", mid+1);
    }
    else{
         printf("elements found ");
    }
    return 0;
}