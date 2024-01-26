#include<stdio.h>

int compute_sum_1toN(int *p); //int compute_sum_1toN(int p);

int main() 
{
	int n, sum;
	scanf_s("%d", &n);

	sum = compute_sum_1toN(&n); //int compute_sum_1toN(n);

	printf("1부터 %d까지 합은 : %d\n", n, sum);

}
int compute_sum_1toN(int *p) //int compute_sum_1toN(int p);
{
	int i, sum = 0;

	for (i = 1; i <= *p; i++) //for (i = 1; i <= p; i++)
		sum = sum + i;

	return sum;
}
