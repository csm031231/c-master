#include <stdio.h>
int mult(int n1, int n2);
double div(int n1, int n2);

int main() {
	int n1, n2, a;
	
	scanf_s("%d %d", &n1, &n2);
	a = mult(n1, n2);
	double b = div(n1, n2);
<<<<<<< HEAD
	printf("%d? %d??ê³±ì? %d\n", n1, n2, a);
	printf("%d? %d ë¹ì¨? %lf\n", n1, n2, b);
=======
	printf("%dì %dì ê³±ì %d\n", n1, n2, a);
        printf("%dì %dì ë¹ì¨ì %lf\n", n1, n2, b);
>>>>>>> 67d45e9cb8d75662d80db6515bbe516e4e2a58f6
}
int mult(int n1, int n2) 
{
	int a = n1 * n2;
}
double div(int n1, int n2)
{
	double b = n1 / n2;
}
