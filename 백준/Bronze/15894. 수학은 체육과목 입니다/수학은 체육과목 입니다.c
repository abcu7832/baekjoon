#include <stdio.h>

int main() {
	int N;
	int i;
	long long int sum = 3;

	scanf("%d", &N);
	sum += N;
	for (i = 0; i < N - 1; i++) {
		sum += 3;
	}

	printf("%lld", sum);
	return 0;
}