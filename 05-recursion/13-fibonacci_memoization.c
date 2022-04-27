#include <stdio.h>

int nums[10];

int fibonacci(int n)
{
  if (n <= 1)
  {
    nums[n] = n;
    return n;
  }
  else
  {
    if (nums[n - 2] == NULL)
      nums[n - 2] = fibonacci(n - 2);
    if (nums[n - 1] == NULL)
      nums[n - 1] = fibonacci(n - 1);

    nums[n] = nums[n - 2] + nums[n - 1];
    return nums[n];
  }
}

int main()
{
  // int i;
  // for (i = 0; i<10; i++){
  //   nums[i] = -1
  // }
  printf("%d \n", fibonacci(10));

  return 0;
}