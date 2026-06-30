#include<stdio.h>

int main(){
    int id,quantity;
    char name[50];
    float price;

    printf("Enter the product ID:");
    scanf("%d",&id);
    printf("enter the product name: ");
    scanf("%s",name);

    printf("enter the price :");
    scanf("%f",&price);

    printf("Inventory Details\n");
    printf("Product ID : %d\n",id);
    printf("Product Name : %s\n",name);
    printf("Quantity : %d\n",quantity);
     printf("Price : %f\n",price);
      printf("total value : %.2f\n",quantity*price);

      return 0;
}