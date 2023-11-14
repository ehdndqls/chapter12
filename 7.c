#define _SRT_SECURE_NO_WARNiNG_
#include<stdio.h>
#include<string.h>

int get_response(char* prompt);
int main() {
	char response[100];
	printf("게임을 하시겠습니까? ");
	gets_s(response, 100);

	if (get_response(response))
		printf("긍정적인 답변\n");
	else
		printf("부정적인 답변\n");
	
	return 0;
}

int get_response(char* prompt) {
	if (!strcmp("yes", prompt) || !strcmp("ok", prompt))
		return 1;
	else if (!strcmp("no", prompt))
		return 0;
}