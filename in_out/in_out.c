#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	char name[] = "";

	printf("������� ���� ���: ");
	scanf_s("%s", &name);

	if (name == "") {
		printf("�� �� ����� ���!");
	}
	else {
		printf("����� ����������, %s.\n", name);
	}

	system("pause>nul");
	return 0;
}