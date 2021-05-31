#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	short int x = 1;
	short int y = 0;

	num1 = (x && y) ? 1 : 0;
	printf("%d & %d = %d\n", x, y, num1);

	num1 = (x || y) ? 1 : 0;
	printf("%d | %d = %d\n", x, y, num1);

	num1 = (x ^ y) ? 1 : 0;
	printf("%d ^ %d = %d\n", x, y, num1);

	num1 = !x;
	printf("!%d = %d\n", x, num1);

	printf("// ------------------------------------->\n");

	num1 = (x && x) ? 1 : 0;
	printf("%d & %d = %d\n", x, x, num1);

	num1 = (x || x) ? 1 : 0;
	printf("%d | %d = %d\n", x, x, num1);

	num1 = (x ^ x) ? 1 : 0;
	printf("%d ^ %d = %d\n", x, x, num1);

	num1 = !y;
	printf("!%d = %d\n", y, num1);

	printf("// ------------------------------------->\n");

	num1 = (y && y) ? 1 : 0;
	printf("%d & %d = %d\n", y, y, num1);

	num1 = (y || y) ? 1 : 0;
	printf("%d | %d = %d\n", y, y, num1);

	num1 = (y ^ y) ? 1 : 0;
	printf("%d ^ %d = %d\n", y, y, num1);

	printf("// ------------------------------------->\n");

	num1 = (y & x) ? 1 : 0;
	printf("%d & %d = %d\n", y, x, num1);

	num1 = (y | x) ? 1 : 0;
	printf("%d | %d = %d\n", y, x, num1);

	num1 = (y ^ x) ? 1 : 0;
	printf("%d ^ %d = %d\n", y, x, num1);


	system("pause");
	return 0;
}