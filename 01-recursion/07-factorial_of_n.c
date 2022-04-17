#include <stdio.h>

int factorial(int n)
{
  if (n <= 1)
    return 1;
  return factorial(n - 1) * n;
}

int main()
{
  printf("%d", factorial(5)); // 120

  return 0;
}