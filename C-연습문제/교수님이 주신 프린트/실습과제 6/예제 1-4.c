<<<<<<< HEAD
#include <stdio.h>
int mult(int n1, int n2);
double div(int n1, int n2);

int main() {
	int n1, n2, a;
	
	scanf_s("%d %d", &n1, &n2);
	a = mult(n1, n2);
	double b = div(n1, n2);
	printf("%d와 %d의 곱은 %d\n", n1, n2, a);
	printf("%d와 %d의 비율은 %lf\n", n1, n2, b);
}
int mult(int n1, int n2) 
{
	int a = n1 * n2;
}
double div(int n1, int n2)
{
	double b = n1 / n2;
}
=======
#include <stdio.h>
int mult(int n1, int n2);
double div(int n1, int n2);

int main() {
	int n1, n2, a;
	
	scanf_s("%d %d", &n1, &n2);
	a = mult(n1, n2);
	double b = div(n1, n2);
	printf("%d?� %d??怨깆? %d\n", n1, n2, a);
	printf("%d?� %d 鍮꾩쑉?� %lf\n", n1, n2, b);
}
int mult(int n1, int n2) 
{
	int a = n1 * n2;
}
double div(int n1, int n2)
{
	double b = n1 / n2;
}
>>>>>>> b7ede86afb6c3f154f4f3423014e8acadcacd1bc
