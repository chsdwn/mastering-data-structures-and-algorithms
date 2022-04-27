#include <stdio.h>

// e^x = 1 + (x/1) + (x^2/2) + (x^3/3!) + .. + (x^n/n!)
double e(int num, int sensivity)
{
  static double dividend = 1, divisor = 1;

  if (sensivity == 0)
    return 1;

  double res = e(num, sensivity - 1); // x^n / n!
  dividend = dividend * num;          // x^n
  divisor = divisor * sensivity;      // n!
  return res + (dividend / divisor);
}

int main()
{
  printf("%lf \n", e(1, 10)); // 2.718282

  return 0;
}