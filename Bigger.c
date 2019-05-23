#include <stdio.h>
#include <math.h>

void DIsBiggerThanZero(double a, double b, double D){	
	double x1 = (-b+pow(D, 0.5))/(2*a);
	double x2 = (-b-pow(D, 0.5))/(2*a);
	printf("x1=%lf\n", x1);
	printf("x2=%lf\n", x2);
}
