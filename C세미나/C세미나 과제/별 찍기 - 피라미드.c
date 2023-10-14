#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int a;

	scanf("%d", &a);

	for (int i = 1; i <= a + (a - 1); i += 2) {
		for (int j = 1; j <= (2 * a - i) / 2; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}