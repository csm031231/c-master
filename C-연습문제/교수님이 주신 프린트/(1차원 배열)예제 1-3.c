#include <stdio.h>
#define qoduf 5

int main(){

	int dlsep[qoduf] = { 3, 7, 1, 9, 10 };
	int cnt = 0, sum = 0;
	for (int i = 0; i < qoduf; i++){

		if (dlsep[i] % 2 == 0){

			cnt++;
			sum += dlsep[i];

		}
	}
	printf("%d \n", sum);


	return 0;
}
