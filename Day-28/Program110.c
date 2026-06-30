#include<stdio.h>

struct bank{
    int accNo;
    char name[50];
    float balance;
};
int main(){
    struct bank b;
  

    printf("enter Account No.: ");
    scanf("%d",&b.accNo);

        printf("enter Acoount Holder name:");
        scanf("%s",b.name);

        printf("enter the balance:");
        scanf("%f",&b.balance);

    
        print("Bank Account Details\n");
        print("Account Number:%d\n",b.accNo);
        printf("Account Holders\n",b.name);
        printf("Balance:.2f\n",b.balance);
    
    return 0;
}

    
