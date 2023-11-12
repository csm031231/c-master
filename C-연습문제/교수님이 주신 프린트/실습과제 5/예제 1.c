#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char name[10];
	char num[14];
	char adress[50];

	scanf("%s", name);
	scanf("%s", num);
	scanf("%s", adress);

	printf("내 이름은 %s이고 전화번호는 %s, 사는 곳은 %s시 입니다.\n", name, num, adress);

	return 0;
}