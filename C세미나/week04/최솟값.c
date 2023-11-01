#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int a[5];
	int min;

	for (int i = 0; i <= 4; i++){
		scanf("%d", &a[i]);
	}

	min = a[0];
	for (int i = 0; i <= 4; i++){
		if (min > a[i]){
			min = a[i];
		}
	}
	printf("%d\n", min);

	return 0;
}