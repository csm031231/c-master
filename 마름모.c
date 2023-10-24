#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int a;

	scanf("%d", &a);

	for (int i = 1; i <= (a + 1) / 2; i++) {


		for (int j = 1; j <= a - (i + 3); j++) {
			printf(" ");
		}
		if (i == 4) {
			for (int j = 1; j <= a; j++) {
				printf("*");
			}

		}
		else {
			printf("*");
			if (i > 1) {
				for (int j = 1; j <= 2 * i - 3; j++) {
					printf(" ");
				}
				printf("*");
			}
		}
		printf("\n");
	}
	for (int i = (a - 1) / 2; i >= 1; i--) {

		for (int j = 1; j <= (a+1)/2-i; j++) {
			printf(" ");
		}
		printf("*");

		if (i > 1) {
			for (int j = 1; j <= 2 * i - 3; j++) {
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}


	
	return 0;
}

