#include<stdio.h>

struct Contact{
    char name[20];
    char phone[50];

};
int main(){
    struct Contact c[10];
    int n;

    printf("Enter no.of contacts:");
    sacnf("Contact %d\n",&n);

    for(int i=0; i<n; i++){
      printf("Contact %d\n",i+1);

      printf("enter the name:");
      scanf("%s",c[i].name);

        printf("Enter the phone number:");
        scanf("%s",c[i].phone);

    }
    printf("Contact List\n");
    for(int i=0; i<n; i++){
        printf("Name:%s\n",c[i].name);
        printf("Phone number:%s\n",c[i].phone);

    }
    return 0;
    
}