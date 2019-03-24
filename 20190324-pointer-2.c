/*
* Basic C Pointer (2) - Swap
* Input 3 double values and use function to swap all those 3 values (last to first, first to second, second to third).
*/

#include <stdio.h>

void swap(double *a, double *b)
{
	printf("Before swap: a = %8p, and *a = %.2lf\n", a, *a);
	printf("Before swap: b = %8p, and *b = %.2lf\n", b, *b);

	double temp = *a;
	*a = *b;
	*b = temp;

	printf("After swap: a = %8p, and *a = %.2lf\n", a, *a);
	printf("After swap: b = %8p, and *b = %.2lf\n", b, *b);
	printf("\n\n");
}

int main()
{
	double a, b, c;

	printf("Please input 3 double values: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	swap(&a, &b);
	swap(&a, &c);

	printf("%.2lf %.2lf %.2lf\n", a, b, c);

	return 0;
}