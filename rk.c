/* układ rownan */

#include <stdio.h>

void clear()
{
printf("\033[2J"); /* Czyści ekran */
printf("\033[0;0f"); /* Ustawia kursor w lewym, górnym rogu */
}

void pobierz(double *a1, double *a2, double *b1, double *b2, double *c1, double *c2)
{
	printf("Podaj wspolczynnik a1:  "); scanf("%lf", a1);
	printf("Podaj wspolczynnik a2:  "); scanf("%lf", a2);
	printf("Podaj wspolczynnik b1:  "); scanf("%lf", b1);
	printf("Podaj wspolczynnik b2:  "); scanf("%lf", b2);
	printf("Podaj wspolczynnik c1:  "); scanf("%lf", c1);
	printf("Podaj wspolczynnik c2:  "); scanf("%lf", c2);
}
	
double wyznacznik_glowny(double a1, double a2, double b1, double b2)
{	return a1*b2 - a2*b1;	}

double wyznacznik_x(double c1, double c2, double b1, double b2)
{	return c1*b2 - c2*b1;	}

double wyznacznik_y(double a1, double a2, double c1, double c2)
{	return a1*c2 - a2*c1;	}

int main()
{
clear();

	double a1, a2, b1, b2, c1 , c2; /* parametry rownania */
	double W, Wx, Wy;
	double x, y;
	
	pobierz(&a1, &a2, &b1, &b2, &c1, &c2);
	
	W = wyznacznik_glowny(a1, a2 , b1, b2);
	Wx = wyznacznik_x(c1, c2, b1, b2);
	Wy = wyznacznik_y(a1, a2, c1, c2);		
	x = Wx / W;
	y = Wy / W;
	
	printf("x = %lf\ny = %lf", x, y);
	
	printf("\n\n\n");	
	
	return 0;
}
