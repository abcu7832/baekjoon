#include <stdio.h>

int main() {
	int N, K;
	// N: 1 이상 10,000 이하
	// K: 1 이상 N 이하
	scanf("%d %d", &N, &K);
	
	int i;
	int j = 0;
	for (i = 1; i <= N; i++) {
		if (N%i == 0) {//약수일경우
			j++;
		}
		if (j == K) { printf("%d", i); break; }
	}
	if (i == N + 1) { printf("0"); }
	return 0;
}