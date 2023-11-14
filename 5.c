#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int ch = 0;

	while (1) {
		printf("문자를 입력하시오: ");
		ch = getchar();
		rewind(stdin);
		if (ch >= 65 && ch <= 90)
			printf("%c\n", ch + 32);
		else if (ch >= 97 && ch <= 122)
			printf("%c\n", ch - 32);
		else
			printf("error\n");
	}
}