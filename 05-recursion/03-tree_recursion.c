#include <stdio.h>

void tree(int num)
{
  if (num > 0)
  {
    printf("%d ", num);
    tree(num - 1);
    tree(num - 1);
  }
}

int main()
{
  tree(3); // 3 2 1 1 2 1 1

  return 0;
}