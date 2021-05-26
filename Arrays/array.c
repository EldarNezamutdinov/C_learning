#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	int numbers[5] = {};

	printf("¬ведите 5 целых чисел через зап€тую и пробел: ");
	scanf_s("%d, %d, %d, %d, %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);

	printf("„исла: %d, %d, %d, %d, %d.\n", numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

	system("pause>nul");
	return 0;
}