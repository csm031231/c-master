#include <stdio.h>

int main()
{
	int a[5] = {2,4,1,5,3};
	int tmp = 0;
	int j;

	for (int i = 0; i <= 4; i++)
	{
		for (j = 0; j <= 4; j++){

			if (a[j] < a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
		
	}
	for (int i = 0; i <= 4; i++){
		printf("%d", a[i]);

	}

	return 0;
}