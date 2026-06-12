#include <stdio.h>
void main()
{
    int a, b, c = 1, n, m, i;
    printf("enter the numbers");
    scanf("%d%d", &a, &b);
    a = n;
    b = m;
    if (n > m)
    {
        for (i = 1; i <= n; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                c = i;
            }
        }
        printf("the hcf is %d and %d", a, b, c);
    }
    else
    {
        for (i = i; i <= m; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                c = i; // c stores HCF
            }
        }
        printf("the hcf of %d and %d ", a, b, c);
    }
}