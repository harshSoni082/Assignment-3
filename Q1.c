// program to print the biggest number among three
#include <stdio.h>

int main()
{
  int a,b,c, largest;
  printf("Enter three numbers: ");
  scanf("%d%d%d", &a,&b,&c);

  largest = a>b ? (a>c ? a : c) : (b>c ? b : c);
  printf("Largest: %d\n",largest);
  return 0;
}
