#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	const double pi = 3.141592;

	double R = 3;

	double S = pi * R * R;
	double L = 2 * pi * R;

	printf("������� ���������� ������� %.2f ����� %f.\n", R, S);
	printf("����� ���������� ������� %.2f ����� %f.\n", R, L);

	system("pause>nul");
	return 0;
}