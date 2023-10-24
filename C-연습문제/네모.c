#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int a;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++ ) {
		
			if (i == 1 ||  i== a) {
				for (int j = 1; j <= a; j ++) {
					printf("*");
				}
			}
			else {
				printf("*");
				for (int j = 2; j <= a-1; j++) {
					if (i + j == a) {
						printf("*");
					}
					else {

						printf(" ");
					}
				}
				printf("*");
			}

			printf("\n");
		}
		return 0;
	}


