#include <stdio.h>

int main()
{
	double height, weight, height_feet, weight_lb;
	double standard_weight;

	printf("Ű(cm)�� �Է��ϼ���. ");
	scanf("%lf", &height);
	printf("������(kg)�� �Է��ϼ���. ");
	scanf("%lf", &weight);

	standard_weight = (height - 100) * 0.9;
	height_feet = height / 30.48;
	weight_lb = weight * 2.20459;

	printf("����� Ű�� %.1lfcm (%.1lffeet)�Դϴ�.\n", height, height_feet);
	printf("����� ü���� %.1lfkg (%.1lflb)�Դϴ�.\n", weight, weight_lb);
	printf("ǥ�� ü�� %.1lf���� ���̴� %+.1lfkg�Դϴ�.\n", weight, weight - standard_weight);

	return 0;
}
