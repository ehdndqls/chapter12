#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char* token;
	char delimit[] = " ";
	char str[100];
	char* name[100];
	int count=0;
	printf("���� �̸��� �빮�ڷ� �Է��Ͻÿ�: ");
	gets_s(str, 100);

	_strlwr(str);

	token = strtok(str, delimit);
	while (token != NULL) {
		name[count++] = token;
		token = strtok(NULL, delimit);
	}
	printf("%s %s \n", name[1], name[0]);

	return 0;
}
