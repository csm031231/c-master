#include<stdio.h>
int find_max(int idata[], int size);

int main() {
	int idata[5] = { 1, 5, 2, 8, 4 };

	int n = find_max(&idata, sizeof(idata));
	printf("%d", n);
}

int find_max(int idata[], int size) {
	int max = idata[5];

	for (int i = 0; i <= size; i++)
		if (idata[i] > max) {
			max = idata[i];
		}


	return max;
}
