// program to fing largest number among four
#include <stdio.h>

int main()
{
  int a, b, c, d, largest;
  printf("Enter four numbers :");
  scanf("%d%d%d%d", &a, &b, &c, &d);
  largest = a;
  if (b > largest)
  {
    largest = b;
  }
  if (c > largest)
  {
    largest = c;
  }
  if (d > largest)
  {
    largest = d;
  }
  printf("Largest: %d\n", largest);
  return 0;
}
