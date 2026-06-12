#include <stdio.h>
int main()
{
    int n, a, b, sum = 0;
    printf("enter the number :");
    scanf("%d", &n);
    a = n;
    while (a > 0)
    {
        b = a % 10;
        sum = sum + (b * b * b);
        a = a / 10;
    }
    if (sum == n)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not an armstrong number");
    }
    return 0;
}