// program which reads 5 numbers a, b, c, d, and x. Here a, b, c, and d are distinct and x is equal to exactly one of a or b or c or d.
#include <stdio.h>

int main()
{
	int a, b, c, d, x;
	printf("Enter five numbers: ");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &x);
	if((a&x) == x)
	{
		printf("x is equal to a\n");
	}
	else if((b&x) == x)
	{
		printf("x is equal to b\n");
	}
	else if((c&x) == x)
	{
		printf("x is equal to c\n");
	}
	else
	{
		printf("x is equal to d\n");
	}

	return 0;
}
