#include<stdio.h>
int main(){
    int choice,length,i;
    char str[100];

    printf("enter the string:");
    sacnf("%s",str);

    
    do{
        printf("Menu\n");
        printf("1. Find length\n");
        printf("2. Reverse string\n");
        printf("3. Convert to uppercase\n");
        printf("4. display string\n");
        printf("exit\n");

        printf("enter the choice:");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                printf("Length=%d",strlen(str));
                break;
            
            case 2:
             length=strlen(str);
             printf("Reverse=");
            for(int i=length-1; i>=0; i--){
                printf("%c",str[i]);
                break;
            }
            case 3:
           
            for(int i=0; str[i]!='\0'; i++){
                if(str[i]>='a' && str[i]<='z'){
                    str[i]=str[i]-32;
                   
                }
            }
            printf("Uppercase =%s",str);
            break;

            case 4:
                    printf("String =%s",str);
                    break;
            case 5:
            printf("Program End");
            break;

            default:
            printf("Invalid choise");

        }
    }
while(choice!=5);
return 0;


}