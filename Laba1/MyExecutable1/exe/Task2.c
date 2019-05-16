
#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

#include "math.h"

double f(double x, double y)

{

	return ((1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x)));

}

void main()

{

	double x = 3, y = 1;

	printf("x = %f\ny = %f\nf = %f\n\n", x, y, f(x, y));

	printf("x = "); scanf("%lf", &x);

	printf("y = "); scanf("%lf", &y);

	printf("f = %f", f(x, y));

	_getch();

}
