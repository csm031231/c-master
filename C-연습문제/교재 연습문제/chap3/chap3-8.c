#include <stdio.h>

int main()
{
	int a, b;
	int sum;

	printf("8���� 16������ ������� �Է��ϼ���. : ");
	scanf("%o %x", &a, &b);

	sum = a + b;

	printf("%o(8) + %x(16) = %d\n", a, b, sum);

	return 0;
}