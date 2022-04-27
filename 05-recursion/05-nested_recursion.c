#include <stdio.h>

int nested(int num)
{
  if (num > 100)
  {
    return num - 10;
  }
  return nested(nested(num + 11));
}

int main()
{
  printf("%d \n", nested(1));   // 91
  printf("%d \n", nested(90));  // 91
  printf("%d \n", nested(95));  // 91
  printf("%d \n", nested(125)); // 115
  printf("%d \n", nested(250)); // 240

  return 0;
}