#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	char name[] = "";

	printf("Введите ваше имя: ");
	scanf_s("%s", &name);

	if (name == "") {
		printf("Вы не ввели имя!");
	}
	else {
		printf("Добро пожаловать, %s.\n", name);
	}

	system("pause>nul");
	return 0;
}