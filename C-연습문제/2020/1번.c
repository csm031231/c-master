#include<stdio.h>

sumMs(int m, int limit);
int main() {
	int limit , m; 

	scanf_s("%d", &limit);
	scanf_s("%d", &m);

	sumMs(m, limit);
	printf("1���� %d���� %d�� ����� ���� %d�̴�. \n", limit, m, sumMs(m, limit));
}
sumMs(int m, int limit) {
	int sum = 0;
	for (int i = 0; i <= limit; i++) {
		if (i % m == 0) {
			sum += i;
		}
	}
	return sum;
}