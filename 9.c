#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char str[100];
	printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(str, 100);

	if (islower(str[0]))
		toupper(str[0]);
	if (str[strlen(str) - 1]!= '.')
		strcat(str, ".");

	printf("%s", str);

	return 0;
}