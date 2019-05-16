
#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

#include "math.h"

void main()

{

	double x = 3, y = 1, f = (1-2*pow(sin(x),2)) / (1+sin(2*x));

	printf("x = %f\ny = %f\nf = %f\n\n", x, y, f);

	printf("x = "); scanf("%lf", &x);

	printf("y = "); scanf("%lf", &y);

	f = (sqrt(x) - sqrt(y)) / x; printf("f = %f", f);

	_getch();

}
