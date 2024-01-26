#include <stdio.h>

int main()
{
	int kor, music;
	double ave;

	printf("±¹¾î À½¾Ç Á¡¼ö´Â? ");
	scanf_s("%d %d", &kor, &music);

	ave = (kor + music) / 2.0;

	printf("±¹¾î :%3d À½¾Ç :%3d Æò±Õ:%.1lf \n", kor, music, ave);
	

	return 0;
}