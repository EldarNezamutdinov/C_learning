#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x = 0;

	printf("Enter the numder: ");
	scanf_s("%d", &x);

	if (x % 2 == 0) {
		printf("The number %d is even.\n", x);
	}
	else {
		printf("The number %d is not even.\n", x);
	}

	system("pause");
	return 0;
}