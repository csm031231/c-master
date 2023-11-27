#include <stdio.h>
int sum(int idata[], int size);

int main() {

	int idata[5] = { 1,5,2,8,4 };

	int a = sum(idata, sizeof(idata) / sizeof(int));
	printf("%d", a);
}
int sum(int idata[], int size) {

	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += idata[i];

	return sum;
}