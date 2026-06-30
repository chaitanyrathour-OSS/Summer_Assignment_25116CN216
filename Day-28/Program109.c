#include<stdio.h>

struct book{
    int id;
    char name[50];
    char author[50];

};
int main(){
    struct book b[50];
    int n;

    printf("enter the no. of books: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("book %d\n",i+1);

        printf("enter the book id:");
        scanf("%d",&b[i].id);

        printf("enter the book name:");

        scanf("%s",b[i].name);

        printf("Enter the Author Name:");
        scanf("%s",b[i].author);

    }
    printf("Library Records: \n");
    for(int i=0; i<n; i++){
        print("Book Id: %d\n",b[i].id);
        print("Book name: %s\n",b[i].name);
        printf("Author: %s\n",b[i].author);
    }
    return 0;
}

    
