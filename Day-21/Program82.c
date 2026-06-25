#include<stdio.h>
int main(){
    char str[50];
    int i,length=0;

    printf("enter a string : ");
    scanf("%s", str);

    while(str[length]!='\0'){
        length++;
    }
    printf("Reverse String :");
    for(i=length-1; i>=0; i--){
        printf("%c",str[i]);
    }
    return 0;
    
}