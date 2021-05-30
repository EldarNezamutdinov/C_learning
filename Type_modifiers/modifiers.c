#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	signed int x = -100, y = 500, z = 0;
	unsigned int num1 = 100, num2 = 200;
	short int age = 16;
	long int num3 = 50000;
	long double pi = 3.14;

	signed char a = 'A';
	unsigned char a1 = 'A';

	printf("Character \'%c\' weighs %d bytes.\n", a, sizeof(a));
	printf("Character \'%c\' weighs %d bytes.\n", a1, sizeof(a1));

	system("pause>nul");
	return 0;
}