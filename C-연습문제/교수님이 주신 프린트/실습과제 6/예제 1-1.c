#include <stdio.h>
int compute_sum_1toN(int number);

int main() 
{
	int n, nsum;
	scanf_s("%d", &n);

	nsum = compute_sum_1toN(n);
	printf("1부터 %d까지 합은 : %d", n, nsum);

	return 0;
}

int compute_sum_1toN(int number) {
	int sum = 0;

	for (int i = 1; i <= number; i++) {
		sum = sum + i;
	}
		return sum;
}