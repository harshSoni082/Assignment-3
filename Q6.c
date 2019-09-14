// program which reads a, b, and c. Let ax2 + bx + c = 0 be a quadratic equation. If roots are real and distinct then both roots are printed. If roots are equal then only one root is printed. If roots are imaginary then real part and complex parts of both roots are printed.
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, D, alpha, beta;
	printf("Enter the values of a, b, c: ");
	scanf("%f%f%f", &a,&b,&c);

	D = pow(b, 2) - 4*a*c;
	if(D < (float)0)
	{
		printf("Equation has complex roots.\n");
		printf("%+.2f%+.2fi, %+.2f%+.2fi",-b/(2*a), sqrt(-D)/(2*a), -b/(2*a), -sqrt(-D)/(2*a));
	}

	else if(D == (float)0)
	{
		printf("Real and equal roots.\n");
		printf("%.2f, %.2f", -b/(2*a), -b/(2*a));
	}
	else
	{
		printf("Distinct and Real roots.\n");
		printf("%.2f, %.2f",(-b+sqrt(D))/(2*a), (-b-sqrt(-D))/(2*a));
	}
	return 0;
}
