#include <stdio.h>
#include <stdlib.h>

int main(void) {
	system("chcp 1251>nul");

	printf("������� ��������� ����� ������ (� ������): \n");

	printf("int: \t%d\n", sizeof(int));
	printf("char: \t%d\n", sizeof(char));
	printf("���������� �������: \t%d\n", sizeof('A'));
	printf("������ \"������\": \t%d\n", sizeof("������"));
	printf("float: \t%d\n", sizeof(float));
	printf("double: \t%d\n", sizeof(double));

	system("pause>nul");
	return 0;
}