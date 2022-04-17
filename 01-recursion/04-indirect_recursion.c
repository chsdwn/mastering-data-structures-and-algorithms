#include <stdio.h>

void decrement(int);
void halve(int);

void decrement(int num)
{
  if (num > 0)
  {
    printf("%d ", num);
    halve(num - 1);
  }
}

void halve(int num)
{
  if (num > 0)
  {
    printf("%d ", num);
    decrement(num / 2);
  }
}

int main()
{
  decrement(8); // 8 7 3 2 1

  return 0;
}