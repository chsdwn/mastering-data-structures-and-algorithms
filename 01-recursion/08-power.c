#include <stdio.h>

int power(int num, int n)
{
  if (n == 0)
    return 1;
  return power(num, n - 1) * num;
}

int powerOptimized(int num, int n)
{
  if (n == 0)
    return 1;
  if (n % 2 == 0)
    return power(num * num, n / 2);
  return num * power(num * num, (n - 1) / 2);
}

int main()
{
  printf("%d \n", power(2, 4));          // 16
  printf("%d \n", powerOptimized(2, 4)); // 16

  return 0;
}