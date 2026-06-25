#include<stdio.h>
int main(){
    char str[50];
    int i=0,vowels=0,consonants=0;

    printf("Enter the string :");
    scanf("%s",str);

    while(str[i]!='\0'){
        char ch = str[i];

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            vowels++;

        }
        else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
            consonants++;
        }
        i++;
    }
    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}