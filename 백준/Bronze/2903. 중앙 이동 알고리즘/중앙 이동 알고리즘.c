#include <stdio.h>

int sqr(int N) {
	int ans = 1;
	for (int i = 0; i < N - 1; i++) {
		ans *= 2;
	}
	return ans;
}
int main() {
	int N;
	int sum = 0;
	int i, j;
	int CASE;
	scanf("%d", &N);//N번
	
	for (i = 0; i <= N; i++) {
		j = sqr(i);
		if (i == 0) { sum = 4; }
		else { sum += 3 * j * j + 2 * j; }
	}
	
	printf("%d", sum);
	return 0;
}