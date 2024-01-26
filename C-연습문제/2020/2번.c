#include <stdio.h>;
sumMS(int m, int limit);
sumM(int m, int limit);
int main() {
	int limit, m, a, count;
	scanf_s("%d", &limit);
	scanf_s("%d", &m);

	sumMS(m, limit);
	sumM(m, limit);
	
	
	printf("1부터 %d까지 %d의 배수의 합은 %d이다. \n", limit, m, sumMS(m, limit));
}
sumMS(int m, int limit) {
	int sum = 0;
	for (int i = 0; i <= limit; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
	}

	return sum;

}
sumM(int m, int limit) {
	int count = 0;
	printf("%d의 배수 : ", m);
	for (int i = 1; i <= limit; i++) {
		if (i % 3 == 0) {
			printf("%d + ", i);
			count++;
		}
		
			
	}
	printf("\b\b = %d (%d회)\n", sumMS(m, limit), count);
	return count;
}