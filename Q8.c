// progra m which reads three numbers. Two of these are same and one of them is different. The program outputs the different number.
#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c, diff_number;
  printf("Enter three numbers (two same): ");
  scanf("%d%d%d",&a,&b,&c);
  diff_number = ((a & b) == a) ? c : ((a & c) == a) ? b : a;
  printf("Different number: %d\n", diff_number);
  return 0;
}
