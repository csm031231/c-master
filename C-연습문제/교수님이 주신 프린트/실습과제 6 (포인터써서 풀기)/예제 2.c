//두 개의 정수형 자료를 교환
#include <stdio.h>
void swap(int *n1, int *n2);

int main() {
	int n1, n2;
	scanf_s("%d %d", &n1, &n2);
	swap(&n1, &n2);
	printf("%d %d", n1, n2);
}
void swap(int *n1, int *n2) {

	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;

}