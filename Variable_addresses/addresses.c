#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	int num;
	char sym;

	int* p;
	char* q;
	p = &num;
	q = &sym;

	*p = 100;
	*q = 'Z';
	
	
	printf("Value of the variable num: \t%d\n", num);
	printf("Value of the variable sym: \t%c\n", sym);

	num = -100;
	sym = 'A';

	printf("Value at address p: \t%d\n", *p);
	printf("Value at address q: \t%c\n", *q);

	system("pause>nul");
	return 0;
}