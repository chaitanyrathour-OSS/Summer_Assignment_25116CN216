#include<stdio.h>
int main(){
    int n,roll[100];
    char name[100][100];
    float marks[100];

    printf("enter the no. of students :");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
         printf("Student %d\n",i+1);

        printf("enter Roll no. :");
        scanf("%d",&roll[i]);

        printf("enter the name:");
        scanf("%s",name[i]);

        printf("enter the marks :");
        scanf("%f",&marks[i]);
    }
    printf("student Records\n");
    for(int i=0; i<n; i++){
        printf("Student %d\n",i+1);
        printf("Roll no. %d\n",roll[i]);
        printf("NAME %s\n",name[i]);
        printf("Marks %f\n",marks[i]);
    }
    return 0;

}