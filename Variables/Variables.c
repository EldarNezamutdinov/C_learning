#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	// ������ ���������� ������ ����� (������, ��� �������� �����������)
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

	printf("���������� a = %d.\n", a);
	printf("���������� b = %d.\n", b);
	printf("���������� c = %f.\n", c);
	printf("���������� d = %f.\n", d);
	printf("���������� e = %f.\n", e);
	printf("���������� f = %f.\n", f);
	printf("���������� g = %d.\n", g);
	printf("���������� h = %d.\n", h);
	printf("���������� i = %d.\n", i);
	printf("���������� j = %d.\n", j);
	printf("���������� k = %c.\n", k);
	printf("���������� l = %c.\n", l);
	printf("���������� m = %d.\n", m);
	printf("���������� n = %d.\n", n);
	printf("���������� o = %d.\n", o);
	printf("���������� p = %d.\n", p);

	system("pause");
	return 0;
}