#include <stdio.h>

int roll[100], marks[100], n;
char name[100][50];

void addStudent();
void displayStudent();

int main() {
    int choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    do {
        printf("\n----- Menu -----\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                printf("Program End");
                break;

            default:
                printf("Invalid Choice");
        }

    } while(choice != 3);

    return 0;
}

void addStudent() {
    int i;

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%d",&marks[i]);
    }
}

void displayStudent() {
    int i;

    printf("Student Records\n");

    for(int i=0; i<n; i++){
        printf("Roll no. : %d\n",roll[i]);
        printf("Name : %s\n",name[i]);
        printf("Marks : %d\n",marks[i]);
    }
}