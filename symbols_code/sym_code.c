#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	char first = 'A', last = 'Z', x;
	int count = 0;

	count = last - first + 1;

	x = first + 10;

	printf("First symbol: \t%c\n", first);
	printf("Code of first symbol: \t%d\n", first);
	printf("Last symbol: \t%c\n", last);
	printf("Code of last symbol: \t%d\n", last);
	printf("Count of symbols: \t%d\n", count);
	printf("Symbol \'%c\' with code %d\n", x, x);

	system("pause>nul");
	return 0;
}