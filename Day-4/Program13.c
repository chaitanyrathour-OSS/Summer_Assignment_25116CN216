#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, i;
    printf("enter the numbers of terms :");
    scanf("%d", &n);
    printf("fibonacci series : \n");

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        int sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}