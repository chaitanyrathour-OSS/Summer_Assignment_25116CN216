#include <stdio.h>
int main()
{
  int i, n, m, rem, temp, sum;
  printf("enter the lower and upprer limit of armstrong number range :");
  scanf("%d%d", &n, &m);
  printf("armstrong number between %d and %d are :\n", n, m);
  for (int i = n; i <= m; i++)
  {
    temp = i;
    sum = 0;
    while (temp > 0)
    {
      rem = temp % 10;
      sum = sum + (rem * rem * rem);
      temp = temp / 10;
    }
    if (sum == i)
    {
      printf("%d\n", i);
    }
  }
  return 0;
}