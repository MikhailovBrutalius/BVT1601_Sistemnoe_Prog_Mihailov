#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){

	double a, b, c, D = 0;
	
	printf("Insert parameters: \n");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	
	D = (pow(b, 2.0)-4*a*c);
	
	if (D>0){ 
			double x1 = (-b+pow(D, 0.5))/(2*a);
			double x2 = (-b-pow(D, 0.5))/(2*a);
			printf("x1=%lf\n", x1);
			printf("x2=%lf\n", x2); 
		}
	else
		if (D<0){ printf("The root is a complex number\n"); }
		else {
			double x1 = (-b/(2*a));
        		printf("x1=%lf\n", x1);
		     }
 }

