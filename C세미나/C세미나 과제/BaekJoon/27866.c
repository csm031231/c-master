#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char S[1000];
	int i;

	printf("���ڿ� S�� �Է��ϼ���: ");
	scanf("%s", S);

	printf("���� i�� �Է��ϼ���: ");
	scanf("%d", &i);


	printf("%c", S[i - 1]);


	return 0;
}