#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	const double pi = 3.141592;

	double R = 3;

	double S = pi * R * R;
	double L = 2 * pi * R;

	printf("Площадь окружности радиуса %.2f равна %f.\n", R, S);
	printf("Длина окружности радиуса %.2f равна %f.\n", R, L);

	system("pause>nul");
	return 0;
}