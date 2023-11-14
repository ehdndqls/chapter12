#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char* token;
	char delimit[] = " ";
	char str[100];
	char* word[100];
	int count = 0, i;
	
	printf("문자열을 입력하시오: ");
	gets_s(str, 100);

	token = strtok(str, delimit);

	while (token != NULL) {
		word[count++] = token;
		token = strtok(NULL, delimit);
	}
	for (i = count; i > 0; i--)
		printf("%s ",word[i-1]);

	return 0;
}