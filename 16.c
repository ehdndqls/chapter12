#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main() {
	char str[100];
	char tmp;
	int i, size;
	printf("�����ϰ� ���� �ؽ�Ʈ�� �Է��Ͻÿ�: ");
	gets_s(str, 100);

	size = strlen(str);

	while (1) {
		printf("%s\n", str);
		Sleep(1000);
		//system("cls");
		tmp = str[0];
		for (i = 0; i < size-1; i++) {
			str[i] = str[i + 1];
		}
		str[size - 1] = tmp;
	}
}