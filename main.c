#include <stdio.h>
#include <math.h>


extern void DIsBiggerThanZero(double a, double b, double D);
extern void DIsLessThanZero();
extern void DIsEqualToZero(double a, double b);

void main(){

	double a, b, c = 0;
	
	printf("Insert parameters: \n");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	double D = (pow(b, 2.0)-4*a*c);
	
	if (D>0){ DIsBiggerThanZero(a, b, D); }

	else
		if (D<0){ DIsLessThanZero(); }

		else DIsEqualToZero(a, b);
 }

