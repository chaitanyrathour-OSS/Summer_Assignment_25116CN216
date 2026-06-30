#include<stdio.h>
int main(){
    int n,bookId[100];
    char bookName[100][100];
    char author[100][100];

    printf("enter the no. of books :");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("BookId %d\n",i+1);
        

        printf("enter BookId:");
        scanf("%d",bookId[i]);

        printf("enter Book name :");
        scanf("%s",bookName[i]);

        printf("Enter the author name :");
        scanf("%s",author[i]);
    }
    printf("Library Records\n");
    for(int i=0; i<n; i++){
        printf("Book %d\n",i+1);
        printf("Book Id : %d\n",bookId[i]);
        printf(" Book Name : %s\n",bookName[i]);
        printf("Author Name %s\n",author[i]);
    }
    return 0;

}