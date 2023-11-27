#include <stdio.h>
int mult(int *n1, int *n2);
double div(int *n1, int *n2);

int main() {
	int n1, n2, a;

	scanf_s("%d %d", &n1, &n2);
	a = mult(&n1, &n2);
	double b = div(&n1, &n2);
	printf("%d와 %d의 곱 %d\n", n1, n2, a);
	printf("%d와 %d의 비율 %lf\n", n1, n2, b);
}
int mult(int *n1, int *n2)
{
	int a = *n1 * *n2;
}
double div(int *n1, int *n2)
{
	double b = *n1 / *n2;
}
