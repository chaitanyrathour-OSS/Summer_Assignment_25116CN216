#include<stdio.h>

struct Student{
    int roll,m1,m2,m3,total;
    char name[20];
    float percentage; 
};

int main(){
    struct Student s;;
   
    printf("Enter Roll no. :");
    scanf("%d",&s.roll);

    printf("enter  name :");
    scanf("%d",&s.name);
   
    printf("entermarks of 3 subject:");
    scanf("%d%d%d",&s.m1,&s.m2,&s.m3);

    s.total =s.m1+s.m2+s.m3;
    s.percentage =s.total/3.0;

    printf("Marksheet \n");
    printf("Roll no. :\n", s.roll);
    prinf("Name:%s\n", s.name);
    printf("Subject2:%d\n",s.m2);
    printf("Subject3:%d\n",s.m3);

   printf("Total %d\n",s.total);
   printf("Percentage %d\n",s.percentage);

    return 0;

    
    
}