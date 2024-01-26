#include <stdio.h>
int mult(int n1, int n2);
double div(int n1, int n2);

int main() {
	int n1, n2, a;
	
	scanf_s("%d %d", &n1, &n2);
	a = mult(n1, n2);
	double b = div(n1, n2);
<<<<<<< HEAD
	printf("%d?� %d??곱�? %d\n", n1, n2, a);
	printf("%d?� %d 비율?� %lf\n", n1, n2, b);
=======
	printf("%d와 %d의 곱은 %d\n", n1, n2, a);
        printf("%d와 %d의 비율은 %lf\n", n1, n2, b);
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
