#include <stdio.h>
void min()
{
    int num1, num2, i, j, prime;
    printf("enter the two numbers");
    scanf("%d%d", &num1, &num2);
    for (i = num1; i <= num2; i++)
    {
        prime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1 && i > 1)
        {
            printf("%d\n", i);
        }
    }
}
