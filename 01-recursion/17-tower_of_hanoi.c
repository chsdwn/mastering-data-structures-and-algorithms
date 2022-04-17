#include <stdio.h>

void move(int n, char from, char mid, char to)
{
  if (n > 0)
  {
    move(n - 1, from, to, mid);
    printf("(%c, %c) \n", from, to);
    move(n - 1, mid, from, to);
  }
}

int main()
{
  move(3, 'A', 'B', 'C');
  /* STEPS */
  // (A, C)
  // (A, B)
  // (C, B)
  // (A, C)
  // (B, A)
  // (B, C)
  // (A, C)

  return 0;
}