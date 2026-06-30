#include<stdio.h>
int main(){
    float a,b;
    int n;

    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter the choice: ");
    scanf("%d",&n);

    printf("enter the two number: ");
    scanf("%f%f",&a,&b);

    switch(n){
        case 1: printf("Result =%.2f",a+b);
        break;

        case 2: printf("Result =%.2f",a-b);
        break;

        case 3: printf("Result =%.2f",a*b);
        break;

        case 4: 
        if(b!=0){
        printf("Result =%.2f",a/b);
        }else{
            printf("Division by zero is not possible");
            break;
        }
        default:
        printf("invalid choice");
    }
return 0;
}