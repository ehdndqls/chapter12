#include<stdio.h>

int str_chr(char* s, int c);
int main() {
	int ch;
	char str[100];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str, 100);
	printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
	ch = getchar();

	printf("a�� ����: %d",str_chr(str, ch));

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