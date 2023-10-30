#include <stdio.h>
#define qoduf 5

int main(){

	int d[qoduf] = { 3, 7, 1, 9, 10 };
	int cnt = 0;
	int max = d[0]; // 최솟값으로 지정
	
	
	for (int i = 0; i < qoduf; i++){

		if (d[i] > max){
			max = d[i];
		}
	}
	int ma = 0;
	for (int i = 0; i < qoduf; i++){
		if (d[i] > ma && d[i] !=max){
			ma = d[i];
		}
	}
	printf("%d \n", max);
	printf("%d \n", ma);

	return 0;
}