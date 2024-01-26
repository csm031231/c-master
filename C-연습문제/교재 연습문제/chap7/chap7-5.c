#include<stdio.h>

int main() {
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day;
	int sum = 0;

	printf("1월부터 몇 월까지의 총 일을 구할까요? ");
	scanf_s("%d", &day);
	
	for (int i = 0; i <= day; i++) {
		sum += days[i];

	}
	printf("1월부터 %d월까지는 총 %d일이 있습니다.", day, sum);


}