// program  which reads three numbers. The program outputs the middle (in terms of value) of these.
#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter three numbers: ");
  scanf("%d%d%d", &a, &b, &c);
  if(a > b)
  {
    if(b > c)
    {
      printf("Mid number: %d\n", b);
    }
    else
    {
      printf("Mid number: %d\n", c);
    }
  }
  else if(b > c)
  {
    if(a > c)
    {
      printf("Mid number: %d\n", a);
    }
    else
    {
      printf("Mid number: %d\n", c);
    }
  }
  else
  {
    printf("Mid number: %d\n", b);
  }

  return 0;
}
