#include <stdio.h>

int main()
{
	double c, f;

	printf("ȭ���µ�(F)�� �Է��ϼ���. : ");
	scanf_s("%lf", &f);

	c = (5.0 / 9.0) * (f - 32);

	printf("ȭ���µ� %.1lf�� �����µ��� %.1lf�Դϴ�.\n", f, c);

	return 0;
}