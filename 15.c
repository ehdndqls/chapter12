#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	int a, b;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%s %d %d", str, 100, &a, &b);

	if (!strcmp(str, "add"))
		printf("������ ���: %d", a + b);
	else if (!strcmp(str, "sub"))
		printf("������ ���: %d", a - b);
	else if (!strcmp(str, "mul"))
		printf("������ ���: %d", a * b);
	else if (!strcmp(str, "div"))
		printf("������ ���: %d", a / b);

	return 0;
}