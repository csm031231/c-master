#include <stdio.h>

int main()
{
	double width, height;
	double a;

	printf("�غ�, ���� : ");
	scanf_s("%lf %lf", &width, &height);

	a = width * height / 2.0;

	printf("�غ�=%.2lf, ����=%.2lf�� �ﰢ���� ����=%.2lf\n", width, height, a);

	return 0;
}