#include<stdio.h>

int main() {
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int count = 0, month;

	printf("12달 중 30일 까지 있는 달은 ");

	for (int i = 0; i <= 12; i++) {
		if (days[i] == 30) {
	      printf("%3d,", i);
		  count++;
		}
	}
	printf("\b 총 %d달입니다. \n", count);

}