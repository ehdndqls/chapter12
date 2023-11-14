#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char str[100];
	int a, b;
	printf("연산을 입력하시오: ");
	scanf_s("%s %d %d", str, 100, &a, &b);

	if (!strcmp(str, "add"))
		printf("연산의 결과: %d", a + b);
	else if (!strcmp(str, "sub"))
		printf("연산의 결과: %d", a - b);
	else if (!strcmp(str, "mul"))
		printf("연산의 결과: %d", a * b);
	else if (!strcmp(str, "div"))
		printf("연산의 결과: %d", a / b);

	return 0;
}