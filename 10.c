#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int check_pal(char *str, int size);

int main() {
	char str[100];

	printf("문자열을 입력하시오: ");
	gets_s(str, 100);
	
	_strupr(str);
	
	if (check_pal(str, strlen(str)))
		printf("회문입니다.\n");
	else 
		printf("회문이 아닙니다.\n");
	
	return 0;
}

int check_pal(char* str, int size){
	int i;
	for (i = 0; i < size/2; i++) {
		if (str[size-1-i] != str[i])
			return 0;
	}
	return 1;
}