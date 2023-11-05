#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){

	int A;

	scanf("%d", &A);

	if (A >= 0 && A <= 100){

		if (90 <= A ){
			printf("A\n");
		}
		else if (80 <= A ){
			printf("B\n");
		}
		else if (70 <= A){
			printf("C\n");
		}
		else if (60 <= A ){
			printf("D\n");
		}
		else {
			printf("F\n");
		}
	}
	

	return 0;
}