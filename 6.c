#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void str_upper(char* s);

int main() {
	char str[100];
	printf("문자열을 입력하시오: ");
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