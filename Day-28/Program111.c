#include<stdio.h>

struct ticket{
    int ticketNo,seats;
    char name[50];
    char destination[50];
};
int main(){
    struct ticket t;
  

    printf("enter ticket No.:");
    scanf("%d",&t.ticketNo);

        printf("enter passenger name:");
        scanf("%s",t.name);

        printf("enter destination:");
        scanf("%s", t.destination);
        
        print("Enter the no. of seats:");
        scanf("%d",&t.seats);

    
        print("Ticket Details:\n");
        printf("ticket number :%d\n",t.ticketNo);
        printf("Passenger name: %s\n",t.name);
        printf("Destination:%s\n",t.destination);
        printf("Seats Booked: %d\n",t.seats);
    
    return 0;
}

    
