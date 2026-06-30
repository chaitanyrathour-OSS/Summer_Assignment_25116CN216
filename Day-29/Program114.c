#include<stdio.h>
int main(){
    int arr[50],n,choice,i,sum,max,min;

    printf("enter the Array size :");
    sacnf("%d",&n);

    printf("eneter the array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);

    }
    do{
        printf("Menu\n");
        printf("1. Display Array\n");
        printf("2. sum of elements\n");
        printf("3. maximum elements\n");
        printf("4. minimum elements\n");
        printf("exit\n");

        printf("enter the choice:");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
            for(int i=0;i<n; i++){
                printf("%d",arr[i]);
                break;
            }
            case 2:
            sum=0;
            for(int i=0; i<n; i++){
                sum+=arr[i];
                printf("Sum =%d",sum);
                break;
            }
            case 3:
            max = arr[0];
            for(int i=0; i<n; i++){
                if(arr[i]>max){
                    max=arr[i];
                    printf("Maximum =%d", max);
                    break;
                }
            }
            case 4:
            min=arr[0];
            for(int i=0; i<n; i++){
                if(arr[i]<min){
                    min=arr[i];
                    printf("Minimum=%d",min);
                    break;

                }
            }
            case 5:
            printf("Program End");
            break;

            default:
            printf("Invalid choise");

        }
    }
while(choice!=5);
return 0;


}