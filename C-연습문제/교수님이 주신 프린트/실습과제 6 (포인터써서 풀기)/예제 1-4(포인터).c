<<<<<<< HEAD
<<<<<<< HEAD:C-연습문제/교수님이 주신 프린트/실습과제 6 (포인터써서 풀기)/예제 1-4(포인터).c
#include <stdio.h>
int mult(int *n1, int *n2);
double div(int *n1, int *n2);

int main() {
	int n1, n2, a;

	scanf_s("%d %d", &n1, &n2);
	a = mult(&n1, &n2);
	double b = div(&n1, &n2);
	printf("%d�� %d�� ���� %d\n", n1, n2, a);
	printf("%d�� %d�� ������ %lf\n", n1, n2, b);
}
int mult(int *n1, int *n2)
{
	int a = *n1 * *n2;
}
double div(int *n1, int *n2)
{
	double b = *n1 / *n2;
}
=======
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
>>>>>>> b7ede86afb6c3f154f4f3423014e8acadcacd1bc:C-연습문제/교수님이 주신 프린트/실습과제 6 (포인터써서 풀기)/예제 1- 4(포인터).c
=======
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
>>>>>>> 4fe6eacd531199da250758477b142e0d6a6fd754
