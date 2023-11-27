#include<stdio.h>
int findMin(int idata[], int size);

int main() {

	int idata[5] = { 1, 5, 2, 8, 4 };
	int Min;

	Min = findMin(idata, sizeof(idata) / sizeof(int));

	printf("%d", Min);
}

int findMin(int idata[], int size) {

	int min = idata[0];

	for (int i = 0; i < size; i++) {
		if (min > idata[i])
			min = idata[i];
	}
	return min;
}