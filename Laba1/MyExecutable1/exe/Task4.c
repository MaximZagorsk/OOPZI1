#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

#include "math.h"

void f_result();

double x, y, f;

void main()

{

	x = 3; y = 1; f_result();

	printf("x = %f\ny = %f\nf = %f\n\n", x, y, f);

	printf("x = "); scanf("%lf", &x);

	printf("y = "); scanf("%lf", &y);

	f_result(); printf("f = %f", f);

	_getch();

}

void f_result()

{

	f = (1 - 2 * pow(sin(x), 2)) / (1 + sin(2 * x));

}