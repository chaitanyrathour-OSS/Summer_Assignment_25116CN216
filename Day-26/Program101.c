#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num,guess;

    srand(time(0));
   num=rand()%100+1;   

   printf("guess no. between 1 to 100\n");

    do{
       printf("enter guess no. :");
       scanf("%d",guess);

        if(guess>num){
            printf("high no.\n");
        }
        else if(guess<num){
           printf("low no.\n");
        }else{
            printf("you guess correct no.\n");
        }
    } while(guess!=num);

    return 0;
}