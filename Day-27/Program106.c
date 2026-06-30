#include<stdio.h>

struct employee{
    int id;
    char name;
    float salary; 
};

int main(){
    struct employee e[50];
    int n;
    printf("Enter no. of employe :");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Employee %d\n",i+1);
    printf("Enter ID :" );
    scanf("%d", &e[i].id);

    printf("enter the name :");
    scanf("%d",&e[i].name);

    printf("enter the salary :");
    scanf("%d",&e[i].salary);

    }
    printf("Employee Record");
    
    for(int i=0; i<n; i++){
        printf("ID: \n",e[i].id);
         printf("Name: \n",e[i].name);
         printf("Salary: \n",e[i].salary);
    }
}