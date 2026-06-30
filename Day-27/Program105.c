#include<stdio.h>

struct student{
    int roll;
    char name;
    float marks; 
};

int main(){
    struct student s[5];
    int n;
    printf("Enter no. of students :");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("Student %d\n",i+1);
    printf("enter the roll no. :" );
    scanf("%d", &s[i].roll);

    printf("enter the name :");
    scanf("%d",&s[i].name);

    printf("enter the marks :");
    scanf("%d",&s[i].marks);

    }
    printf("student Record");
    
    for(int i=0; i<n; i++){
        printf("Roll no.\n",s[i].roll);
         printf("Name\n",s[i].name);
         printf("Marks\n",s[i].marks);
    }
}