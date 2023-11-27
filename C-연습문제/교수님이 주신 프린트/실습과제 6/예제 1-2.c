#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumOfRange(int n1, int n2) 
{
	
	int sum = 0;

	for (int i = n1; i <= n2; i++) {
		sum = sum + i;
	}
	return sum;
}

int main()
{
	int n1, n2, nsum;
	scanf_s("%d %d", &n1, &n2);
	nsum = sumOfRange(n1, n2);
	printf("%d부터 %d까지의 합은 %d\n", n1, n2, nsum);
}
