#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	int a[5];
	int sum=0, avg = 0;
	
	for (int i = 0; i <= 4; i++){
		scanf("%d", &a[i]);

		sum += a[i];
		printf("%d ", a[i]);
	}
	printf("\n");
	avg = sum / 5;
	printf("ЦђБе : %d\n", avg);

	return 0;
}