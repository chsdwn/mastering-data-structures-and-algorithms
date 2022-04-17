#include <stdio.h>

// nCr = n!/r!(n-r)!
int nCr(int n, int r)
{
  if (n == r || r == 0)
    return 1;
  return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main()
{
  printf("%d \n", nCr(4, 2)); // 6

  return 0;
}