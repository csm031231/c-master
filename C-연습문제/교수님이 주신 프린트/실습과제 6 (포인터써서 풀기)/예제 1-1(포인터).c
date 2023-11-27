<<<<<<< HEAD
#include<stdio.h>

int compute_sum_1toN(int *p); //int compute_sum_1toN(int p);

int main() 
{
	int n, sum;
	scanf_s("%d", &n);

	sum = compute_sum_1toN(&n); //int compute_sum_1toN(n);

	printf("1ºÎÅÍ %d±îÁöÀÇ ÇÕÀº %dÀÔ´Ï´Ù.\n", n, sum);

}
int compute_sum_1toN(int *p) //int compute_sum_1toN(int p);
{
	int i, sum = 0;

	for (i = 1; i <= *p; i++) //for (i = 1; i <= p; i++)
		sum = sum + i;

	return sum;
}
=======
#include<stdio.h>

int compute_sum_1toN(int *p); //int compute_sum_1toN(int p);

int main() 
{
	int n, sum;
	scanf_s("%d", &n);

	sum = compute_sum_1toN(&n); //int compute_sum_1toN(n);

	printf("1ë¶€í„° %dê¹Œì§€ì˜ í•©ì€ %dì…ë‹ˆë‹¤\n", n, sum);

}
int compute_sum_1toN(int *p) //int compute_sum_1toN(int p);
{
	int i, sum = 0;

	for (i = 1; i <= *p; i++) //for (i = 1; i <= p; i++)
		sum = sum + i;

	return sum;
}
>>>>>>> b7ede86afb6c3f154f4f3423014e8acadcacd1bc
