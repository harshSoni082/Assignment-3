// Write program, which reads 5 numbers a, b, c, d, and x. The program output how many among a, b, c, and d are equal to x.
#include <stdio.h>

int main()
{
	int a, b, c, d, x, counter = 0;
	printf("Enter five numbers: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &x);
	if((a&x) == x)
	{
		counter++;
	}
	if((b&x) == x)
	{
    counter++;
	}
	if((c&x) == x)
	{
    counter++;
	}
	if((d&x) == x)
	{
		counter++;
	}
  printf("Same to x: %d\n", counter);
	return 0;
}
