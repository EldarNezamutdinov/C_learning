#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;

	printf("Enter the number: ");
	scanf("%d", &n);

	int a = 1, b = 1;
	int k = 3;
	
	while (k<=n) {
		b = b + a;
		a = b - a;
		k++;
	}

	printf("Fibonacci number: %d\n", b);

	system("pause");
	return 0;
}