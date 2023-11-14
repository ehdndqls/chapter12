#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char str[100];
	printf("텍스트를 입력하시오: ");
	gets_s(str, 100);

	if (islower(str[0]))
		toupper(str[0]);
	if (str[strlen(str) - 1]!= '.')
		strcat(str, ".");

	printf("%s", str);

	return 0;
}