#include <stdio.h>
#include <stdlib.h>

int main(void) {
	short int a = 10, b = 4;
	double pi = 3.14, c = 12.5;

	double dr = 0;
	int ir = 0;

	printf("%d + %d = %d\n", a, b, ir = a + b);
	printf("%d - %d = %d\n", a, b, ir = a - b);
	printf("%d * %d = %d\n", a, b, ir = a * b);
	printf("%d / %d = %d\n", a, b, ir = a / b);
	printf("%d / %d = %.1f\n", a, b, dr = (double)a / (double)b);
	printf("%d %% %d = %d\n", a, b, ir = a % b);

	system("pause");
	return 0;
}