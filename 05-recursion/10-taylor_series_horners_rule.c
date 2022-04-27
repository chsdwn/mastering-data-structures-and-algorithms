#include <stdio.h>

double e(int num, int sensivity)
{
  static double res;
  if (sensivity == 0)
    return res;

  res = 1 + (num * res / sensivity);
  return e(num, sensivity - 1);
}

int main()
{
  printf("%lf \n", e(1, 10)); // 2.718282

  return 0;
}