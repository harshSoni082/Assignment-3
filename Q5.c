// program which reads a, b, and c. Let ax + by + c = 0 be the equation of a line. Print its slope. The program also prints whether the line is vertical or not.
#include<stdio.h>

int main()
{
  int a,b,c;
  float slope;
  printf("Enter coefficients: ");
  scanf("%d%d%d", &a, &b, &c);
  if(b == 0)
  {
    printf("Entered line is vertical");
  }
  else
  {
    slope = -a/b;
    printf("Slope: %.2f\n", slope);
  }
  return 0;
}
