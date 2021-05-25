#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	// создаём переменные разных типов (кстати, так выглядят комментарии)
	int a, b;
	float c, d;
	double e, f;
	short g, h;
	long i, j;
	char k, l;
	unsigned int m, n;
	unsigned short o, p;

	a = 120000;
	b = -800000;
	c = 120.23;
	d = -1.12;
	e = 1000000.125;
	f = -2000000.236;
	g = 100;
	h = 200;
	i = 100000000;
	j = -10000000;
	k = 'k';
	l = 'l';
	m = 777;
	n = 999;
	o = 12;
	p = 135;

	printf("Переменная a = %d.\n", a);
	printf("Переменная b = %d.\n", b);
	printf("Переменная c = %f.\n", c);
	printf("Переменная d = %f.\n", d);
	printf("Переменная e = %f.\n", e);
	printf("Переменная f = %f.\n", f);
	printf("Переменная g = %d.\n", g);
	printf("Переменная h = %d.\n", h);
	printf("Переменная i = %d.\n", i);
	printf("Переменная j = %d.\n", j);
	printf("Переменная k = %c.\n", k);
	printf("Переменная l = %c.\n", l);
	printf("Переменная m = %d.\n", m);
	printf("Переменная n = %d.\n", n);
	printf("Переменная o = %d.\n", o);
	printf("Переменная p = %d.\n", p);

	system("pause");
	return 0;
}