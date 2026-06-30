#include<stdio.h>
#include<string.h>
int main(){
    char name[10][10],temp[20];
    
    printf("enter the names:\n");
    for(int i=0;i<5;i++){
        scanf("%s",name[i]);

    }
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(name[i],name[j])>0){
               strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                 strcpy(name[j],temp);
            }
        }
    }
    printf("names in alphabetical order:\n");
    for(int i=0; i<5; i++){
        printf("%s\n",name[i]);
    }
    return 0;
}