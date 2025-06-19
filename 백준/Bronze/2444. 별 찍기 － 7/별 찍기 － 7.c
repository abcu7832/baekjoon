#include <stdio.h>

int main()
{
	int i, k, A;
	scanf("%d", &A);

	for (i = 0; i < A - 1; i++) {
		for (k = 1; k < A - i; k++) {
			printf(" ");
		}
		for (k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = A - 1; i >= 0; i--) {
		for (k = 1; k < A - i; k++) {
			printf(" ");
		}
		for (k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}