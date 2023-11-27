#include<stdio.h>
double average(int *idata, int size);

int main() {
	int idata[5] = { 1, 5, 2, 8, 4 };

	double d = average(idata, sizeof(idata) / sizeof(int));

	printf("%f", d);
}

double average(int *idata, int size) {
	double avg = 0;
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += idata[i];
	}
	avg = (double)sum / size;

	return avg;
}
