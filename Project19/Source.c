#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define M_PI            3.14159265358979323846


double fa(double x) {
	double y;
	if (x <= 3)
		y = pow(x, 2) - 3 * x + 9;
	else
		y = 1 / (pow(x, 3) + 3);
	return y;
}

double fb(double x) {
	double z;
	z = x * exp(sin(pow(x * M_PI / 180, 2)));
	return z;
}

void main() {
	setlocale(LC_ALL, "RUS");
	double x;

	printf("Значение x введите: ");
	scanf("%lf", &x);
	printf("F1(x) = %lf, F2(x) = %lf\n", fa(x), fb(x));
	printf("Произведение F1(x) и F2(x) = %lf\nРазность квадратов F1(x) и F2(x) = %lf\nУдвоенная сумма F1(x) и F2(x) = %lf\n", fa(x) * fb(x), pow(fa(x), 2) - pow(fb(x), 2), 2 * (fa(x) + fb(x)));
}