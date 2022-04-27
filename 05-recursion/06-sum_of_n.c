#include <stdio.h>

int sum(int n)
{
  if (n == 0)
    return 0;
  return sum(n - 1) + n;
}

int main()
{
  printf("%d", sum(3)); // 6

  return 0;
}