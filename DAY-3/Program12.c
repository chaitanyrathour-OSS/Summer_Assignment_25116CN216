#include <stdio.h>
void main()
{
    int a, b, c = 1, i, n, m, z = 1;
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
        z = a * b / c;
        printf("the LCM of %d and %d is %d", a, b, z);
    }
    else
    {
        for (i = 1; i <= m; i++)
        {
            if (a % i == 0 && b % i == 0)
            {
                c = i;
            }
        }
        z = a * b / c;
        printf("the LCM of %d and %d is %d", a, b, z);
    }
}
