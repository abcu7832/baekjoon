#include <stdio.h>

int main() {
	int N;
	char result[10000];//10억보다 항상 작기 때문에
	int mid[10000] = { 0, };
	int B;//(2 ≤ B ≤ 36)
	int i = 0, j = 0;
	int test;

	scanf("%d", &N);
	scanf("%d", &B);

	test = N;
	for (;;) {
		test /= B;
		i++;//result의 길이
		if (test == 0) { break; }
	}
	//printf("%d", i);
	for (j = i - 1; j >= 0; j--) {
		mid[j] = N % B;
		N /= B;
		if (mid[j] >= 10) {
			result[j] = 'A' + (mid[j] - 10);
		}
		else {
			result[j] = '0' + mid[j];
		}
	}
	result[i] = '\0';
	printf("%s", result); 
	return 0;
}