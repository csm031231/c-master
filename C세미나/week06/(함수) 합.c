#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum += i;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	int sum = add(n);

	printf("%d\n", sum);

}