// program which reads a, b, and c as sides of a triangle and prints whether angle A is 90° or not.
#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c;
  printf("Enter the side of triangle in desc. order: ");
  scanf("%d%d%d",&a, &b, &c);
  if(pow(b, 2) + pow(c, 2) - pow(a, 2))
  {
    printf("Right angles triangle not possible\n");
  }
  else
  {
    printf("Right angles triangle possible\n");
  }
  return 0;
}
