#include<stdio.h>
int main(){
    int pin,balance,amount;
    printf("enter the balance:");
    scanf("%d",&balance);

    printf("enter the pin:");
    scanf("%d",&pin);

    if(pin==1814){
       printf("enter withdrawl amount :");
       scanf("%d",&amount);
       if(amount<=balance){
        balance=balance-amount;

        printf("transaction succesful\n");
        printf("remaining balance =%d",balance);

       }
       else{
        printf("insuffiecient balance");
       }
    }
    else{
        printf("invalid pin");
    }
    return 0;
}