#include <stdio.h>
int add(int n1, int n2);
int sub(int n1, int n2);

int main()
{
	int n1, n2, a, b;
	scanf_s("%d %d", &n1, &n2);
	a = add(n1, n2);
    b = sub(n1, n2);
	printf("%d부터 %d까지의 합은 %d\n", n1, n2, a); 
	printf("%d부터 %d까지의 차는 %d\n", n1, n2, b);

	return 0;
}

int add(int n1, int n2) 
{
	int a = n1 + n2;
	return a;
}
int sub(int n1, int n2) 
{
	int b = n1 - n2;
	return b;

}