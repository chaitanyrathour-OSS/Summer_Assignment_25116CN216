#include<stdio.h>
int main(){
    int ans,score=0;
    printf("quiz application:\n");

    printf("what is capital of India?\n");
    printf("1.Mumbai\n 2.Delhi\n 3.Kolkata\n 4.UP");
    printf("enter your answer:");
    scanf("%d",&ans);

    if(ans==2){
        score++;

    }
    printf("10+5\n=?\n");
    printf("1. 15\n 2. 9\n 3. 7\n 4. 11");
    scanf("%d",&ans);
    if(ans==1){
        score++;
    }
    printf("your score=%d/2\n",score);
    return 0;
}