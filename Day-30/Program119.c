#include<stdio.h>
int main(){
    int n,Id[100];
    char Name[100][100];
    float salary[100][100];

    printf("enter the no. of employee :");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Employee %d\n",i+1);
        

        printf("enter Employee Id:");
        scanf("%d",Id[i]);

        printf("enter Employee name :");
        scanf("%s",Name[i]);

        printf("Enter salary :");
        scanf("%f",&salary[i]);
    }
    printf("Employee Records\n");
    for(int i=0; i<n; i++){
        printf("Employee %d\n",i+1);
        printf("Employee Id : %d\n",Id[i]);
        printf(" Employee Name : %s\n",Name[i]);
        printf("Salary %f\n",salary[i]);
    }
    return 0;

}