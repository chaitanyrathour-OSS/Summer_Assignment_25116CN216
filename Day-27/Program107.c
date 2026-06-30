#include<stdio.h>

struct employee{
    int id;
    char name;
    float basic, hra,da,total; 
};

int main(){
    struct employee e;
   
    printf("Enter employe id :");
    scanf("%d",&e.id);

    printf("enter employee name :");
    scanf("%d",&e.name);
   
    printf("enter basic salary :");
    scanf("%d",&e.basic);

    e.hra =e.basic*0.20;
    e.da = e.basic*0.10;
    e.total = e.basic + e.hra +e.da;

    printf("salary Details \n");
    printf("ID:\n", e.id);
    prinf("Name:%s\n", e.name);
    printf("Basic Salary :%.2f\n",e.basic);
    printf("HRA: %.2f\n",e.hra);
    printf("DA: %.2f\n", e.da);
    printf("Total Salary: %.2f\n", e.total);

    return 0;

    
    
}