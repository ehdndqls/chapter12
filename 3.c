#include<stdio.h>

int str_chr(char* s, int c);
int main() {
	int ch;
	char str[100];
	printf("문자열을 입력하시오: ");
	gets_s(str, 100);
	printf("개수를 셀 문자를 입력하시오: ");
	ch = getchar();

	printf("a의 개수: %d",str_chr(str, ch));

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