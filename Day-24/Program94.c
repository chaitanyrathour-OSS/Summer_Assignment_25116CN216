#include<stdio.h>

int main(){
    char s1[100];
    int i,count;

    printf("Enter the string :");
    scanf("%s",s1);
    i=0;

    while(s1[i]!='\0'){
        count=1;
        while(s1[i]==s1[i+1]){
            count++;
            i++;
        }
        printf("%c%d\n",s1[i] ,count);
        i++;
    }
    return 0;
}