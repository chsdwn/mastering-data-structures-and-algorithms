#include <stdio.h>

double e(int num, int sensivity)
{
  double res = 1;
  double dividend = 1;
  double divisor = 1;

  int i;
  for (i = 1; i <= sensivity; i++)
  {
    dividend *= num;
    divisor *= i;
    res += dividend / divisor;
  }

  return res;
}

int main()
{
  printf("%lf \n", e(1, 10)); // 2.718282

  return 0;
}