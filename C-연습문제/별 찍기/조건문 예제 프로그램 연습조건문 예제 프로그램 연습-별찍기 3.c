#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a;

	scanf("%d", &a);

	for (int i = 1; i <= a; i+=2) {

		for (int j = 0; j <= (a - i) / 2; j++) {
			printf(" ");
		}

		for (int j = 1; j <= i; j++) {
			printf("*");
		}
	
		printf("\n");
	}
	return 0;
}
