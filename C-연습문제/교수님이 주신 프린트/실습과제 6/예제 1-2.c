<<<<<<< HEAD
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
	printf("%dºÎÅÍ %d±îÁöÀÇ ÇÕÀº %d\n", n1, n2, nsum);
}
=======
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sumOfRange(int n1, int n2);

int main()
{
	int n1, n2, nsum;
	scanf_s("%d %d", &n1, &n2);
	nsum = sumOfRange(n1, n2);
	printf("%dë¶€í„° %dê¹Œì§€ì˜ í•©ì€ %d\n", n1, n2, nsum);
}
int sumOfRange(int n1, int n2) 
{
	
	int sum = 0;

	for (int i = n1; i <= n2; i++) {
		sum = sum + i;
	}
	return sum;
}
>>>>>>> b7ede86afb6c3f154f4f3423014e8acadcacd1bc
