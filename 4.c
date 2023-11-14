#include<stdio.h>

int str_chr(char* s, int c);
int main() {
	int ch, i;
	char str[100];
	printf("문자열을 입력하시오: ");
	gets_s(str, 100);
	
	for (i = 0; i < 26; i++) {
		printf("%c: %d\n", 'a' + i, str_chr(str, 'a' + i));
	}

	return 0;
}
int str_chr(char* s, int c) {
	int time = 0;
	while (*s) {
		if (*s == c) {
			time++;
		}
		s++;
	}
	return time;
}