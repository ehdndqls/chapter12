#include<stdio.h>
int main() {
	int ch;
	printf("문자를 입력하시오: ");
	ch = getchar();
	printf("아스키 코드값 = %d", ch);

	return 0;
}