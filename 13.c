#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	char* token;
	char delimit[] = ".,";
	int count = 0;
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str, 100);

	token = strtok(str, delimit);
	while (token != NULL) {
		token = strtok(NULL, delimit);
		count++;
	}
	printf("�������� ������ %d�Դϴ�. \n", count);

	return 0;
}