#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void str_upper(char* s);

int main() {
	char str[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str, 100);

	str_upper(str);

	printf("%s", str);
	return 0;
}

void str_upper(char* s) {
	while (*s) {
		if (*s >= 65 && *s <= 90)
			*s+=32;
		else if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
}