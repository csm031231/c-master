#include <stdio.h>

int main()
{
	int a, b;
	int sum;

	printf("8진수 16진수를 순서대로 입력하세요. : ");
	scanf("%o %x", &a, &b);

	sum = a + b;

	printf("%o(8) + %x(16) = %d\n", a, b, sum);

	return 0;
}