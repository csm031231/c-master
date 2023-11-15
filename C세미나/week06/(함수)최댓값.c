#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a(int num[]){
	int max = 0;

	for (int i = 1; i <= 4; i++)
	{
		if (max < num[i])
		{
			max = num[i];
		}
	}
	return max;
}
int main()
{
	int num[5];

	for (int i = 1; i <= 4; i++)
	{
		scanf("%d", &num[i]);
	}
	int max = a(num);

	printf("%d\n", max);

}