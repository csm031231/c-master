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
<<<<<<< HEAD
=======
#include <stdio.h>
int compute_sum_1toN(int number);

int main() 
{
	int n, nsum;
	scanf_s("%d", &n);

	nsum = compute_sum_1toN(n);
	printf("1부??%d까�????? %d", n, nsum);

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
=======
>>>>>>> 67d45e9cb8d75662d80db6515bbe516e4e2a58f6
