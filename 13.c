#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	char* token;
	char delimit[] = ".,";
	int count = 0;
	printf("문자열을 입력하시오: ");
	gets_s(str, 100);

	token = strtok(str, delimit);
	while (token != NULL) {
		token = strtok(NULL, delimit);
		count++;
	}
	printf("구두점의 개수는 %d입니다. \n", count);

	return 0;
}