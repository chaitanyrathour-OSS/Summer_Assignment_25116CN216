#include<stdio.h>
int main(){
    int a,b,c,x,y,z;

    printf("enter the numbers :");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);

    if(a==x || a==y || a==z){
        printf("%d",a);
    }
    if(b==x || b==y || b==z){
        printf("%d",b);
    }
    if(c==x || c==y || c==z){
        printf("%d",c);
    }
    return 0;
}