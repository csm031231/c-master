#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char data[50];
	char remove, ch;
	int i, check;

	printf("문자열을 입력하세요 : ");
	gets(data);
	printf("삭제할 문자를 입력하세요 : ");
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