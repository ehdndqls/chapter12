#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char* token;
	char delimit[] = " ";
	char str[80];
	char final_str[80]="";
	char search_s[80];
	char change_s[80];
	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(str, 80);
	printf("ã�� ���ڿ�: ");
	gets_s(search_s, 80);
	printf("�ٲ� ���ڿ�: ");
	gets_s(change_s, 80);

	token = strtok(str, delimit);
	while (token != NULL) {
		if (!strcmp(token, search_s)) {
			strcat(final_str, change_s);
			strcat(final_str, delimit);
		}
		else {
			strcat(final_str, token);
			strcat(final_str, delimit);
		}
		token = strtok(NULL, delimit);
	}
	printf("������ ���ڿ�: %s", final_str);
}