#include <stdio.h>

int main()
{
	int kor, music;
	double ave;

	printf("���� ���� ������? ");
	scanf_s("%d %d", &kor, &music);

	ave = (kor + music) / 2.0;

	printf("���� :%3d ���� :%3d ���:%.1lf \n", kor, music, ave);
	

	return 0;
}