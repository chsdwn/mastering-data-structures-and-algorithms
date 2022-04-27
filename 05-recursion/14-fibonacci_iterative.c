#include <stdio.h>

int fibonacci(int n)
{
  int res = 0;
  int num = 0, num2 = 1;

  int i;
  for (i = 2; i <= n; i++)
  {
    res = num + num2;
    num = num2;
    num2 = res;
  }
  return res;
}

int main()
{
  printf("%d \n", fibonacci(10)); // 55

  return 0;
}