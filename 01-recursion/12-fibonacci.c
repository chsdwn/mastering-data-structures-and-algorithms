#include <stdio.h>

int fibonacci(int n)
{
  if (n <= 1)
    return n;
  return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
  printf("%d \n", fibonacci(10)); // 55

  return 0;
}