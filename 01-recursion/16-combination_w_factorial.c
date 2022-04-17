#include <stdio.h>

int fact(int num)
{
  if (num == 1)
    return 1;
  return fact(num - 1) * num;
}

int nCr(int n, int r)
{
  return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
  printf("%d \n", nCr(4, 2));

  return 0;
}