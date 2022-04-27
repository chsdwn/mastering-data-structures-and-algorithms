#include <stdio.h>

void tail(int num)
{
  if (num > 0)
  {
    printf("%d ", num);
    tail(num - 1);
  }
}

int main()
{
  tail(3); // 3 2 1

  return 0;
}