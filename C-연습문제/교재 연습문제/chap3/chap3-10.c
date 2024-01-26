#include <stdio.h>

int main()
{
	double height, weight, height_feet, weight_lb;
	double standard_weight;

	printf("키(cm)를 입력하세요. ");
	scanf("%lf", &height);
	printf("몸무게(kg)를 입력하세요. ");
	scanf("%lf", &weight);

	standard_weight = (height - 100) * 0.9;
	height_feet = height / 30.48;
	weight_lb = weight * 2.20459;

	printf("당신의 키는 %.1lfcm (%.1lffeet)입니다.\n", height, height_feet);
	printf("당신의 체중은 %.1lfkg (%.1lflb)입니다.\n", weight, weight_lb);
	printf("표준 체중 %.1lf과의 차이는 %+.1lfkg입니다.\n", weight, weight - standard_weight);

	return 0;
}
