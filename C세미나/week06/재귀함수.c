#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int n){
	int sum;
	if (n > 1)
	{
		sum = add(n - 1) + n;
	}
	else
	{
		return 1;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", add(n));
}