<<<<<<< HEAD
#include <stdio.h>
int compute_sum_1toN(int number);

int main() 
{
	int n, nsum;
	scanf_s("%d", &n);

	nsum = compute_sum_1toN(n);
	printf("1���� %d���� ���� : %d", n, nsum);

	return 0;
}

int compute_sum_1toN(int number) {
	int sum = 0;

	for (int i = 1; i <= number; i++) {
		sum = sum + i;
	}
		return sum;
}
=======
#include <stdio.h>
int compute_sum_1toN(int number);

int main() 
{
	int n, nsum;
	scanf_s("%d", &n);

	nsum = compute_sum_1toN(n);
	printf("1부터 %d까지의 합: %d", n, nsum);

	return 0;
}

int compute_sum_1toN(int number) {
	int sum = 0;

	for (int i = 1; i <= number; i++) {
		sum = sum + i;
	}
		return sum;
}
>>>>>>> b7ede86afb6c3f154f4f3423014e8acadcacd1bc
