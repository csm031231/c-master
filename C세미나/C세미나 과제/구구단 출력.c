#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, i;
	scanf("%d", &a);

	printf("input : %d \n ", a);
	
	for (i = 1; i <= 9; i++) 
	{
		printf("%d * %d = %d\n", a, a, i, a * i);
	}

	return 0;
}