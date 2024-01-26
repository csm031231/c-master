#include <stdio.h>

int main()
{
	double width, height;
	double a;

	printf("밑변, 높이 : ");
	scanf_s("%lf %lf", &width, &height);

	a = width * height / 2.0;

	printf("밑변=%.2lf, 높이=%.2lf인 삼각형의 면적=%.2lf\n", width, height, a);

	return 0;
}