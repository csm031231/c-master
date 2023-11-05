#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char S[1000];
	int i;

	printf("문자열 S를 입력하세요: ");
	scanf("%s", S);

	printf("정수 i를 입력하세요: ");
	scanf("%d", &i);


	printf("%c", S[i - 1]);


	return 0;
}