#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void clear_vac(char*, char[], char[]);

int main() {
	char* token = NULL;
	char str[100] = "";
	char init[100] = "";
	printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
	gets_s(init, 100);
	
	clear_vac(token, init, str);
	
	printf("%s", str);
	
	return 0; 
}
void clear_vac(char* token, char init[], char result[]) {
	token = strtok(init, " ");
	if (token != NULL) {
		strcat(result, token);
		clear_vac(token,NULL,result);
	}
}
