#include<stdio.h>

int main() {
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int day;
	int sum = 0;

	printf("1������ �� �������� �� ���� ���ұ��? ");
	scanf_s("%d", &day);
	
	for (int i = 0; i <= day; i++) {
		sum += days[i];

	}
	printf("1������ %d�������� �� %d���� �ֽ��ϴ�.", day, sum);


}