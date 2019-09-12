// program which reads 2 numbers and prints both of them. The bigger number is printed first.
#include <stdio.h>
#include <math.h>

int main()
{
  int x, y;
  printf("Enter two numbers:");
  scanf("%d%d", &x, &y);

  if(x > y)
  {
    x *= y;
    y = x/y;
    x = x/y;
  }

  printf("Arranged order: %d, %d\n", x, y);
  return 0;
}
