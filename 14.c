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
	printf("문자열을 입력하시오: ");
	gets_s(str, 80);
	printf("찾을 문자열: ");
	gets_s(search_s, 80);
	printf("바꿀 문자열: ");
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
	printf("수정된 문자열: %s", final_str);
}