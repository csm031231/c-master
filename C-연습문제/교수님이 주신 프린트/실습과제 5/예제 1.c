#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char name[10];
	char num[14];
	char adress[50];

	scanf("%s", name);
	scanf("%s", num);
	scanf("%s", adress);

	printf("�� �̸��� %s�̰� ��ȭ��ȣ�� %s, ��� ���� %s�� �Դϴ�.\n", name, num, adress);

	return 0;
}