#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char data[50];
	char remove, ch;
	int i, check;

	printf("���ڿ��� �Է��ϼ��� : ");
	gets(data);
	printf("������ ���ڸ� �Է��ϼ��� : ");
	scanf("%c", &remove);

	for (i = 0; i < strlen(data); i++) {

		if (data[i] == remove) {
			check = i;
			break;
		}
	}
	if (check >= 0) {
		for (i = check; i < strlen(data); i++) {
			data[i] = data[i + 1];
		}
		data[i] = '\0';
	}
	puts(data);

	return 0;
}