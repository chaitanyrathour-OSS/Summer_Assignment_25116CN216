#include<stdio.h>
int main(){
     int arr[50],n,sum,i,j;

    int maxfreq=0,element;

   printf("enter the size of array");
  scanf("%d",&n);

    printf("entee the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

   for(int i=0;i<n;i++){
     int count=1;

        for(int j=i+1;j<n;j++){
            if(arr[i]=arr[j]) 
            {
                count++;
            }
        }

       if(count>maxfreq){
           maxfreq=count;

            element=arr[i];
        }
    }

   printf("maximum frequency element= %d\n",element);
   printf("frequency= %d",maxfreq);

    return 0;
}