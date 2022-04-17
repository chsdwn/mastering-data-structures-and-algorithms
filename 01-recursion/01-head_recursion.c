#include <stdio.h>

void head(int num)
{
  if (num > 0)
  {
    head(num - 1);
    printf("%d ", num);
  }
}

int main()
{
  head(3); // 1 2 3

  return 0;
}