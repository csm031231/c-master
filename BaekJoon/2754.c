#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int A;

	scanf("%d", &A);

	if ((A % 4 == 0 && A % 100 != 0) ||A % 400 == 0){
		printf("1\n");
	}
	else{
		printf("0\n");
	}
	return 0;
}