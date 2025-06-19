#include <stdio.h>

int main() {
	int N;// 1 ≤ N ≤ 10,000,000
	int i = 2;
	
	//정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

	scanf("%d", &N);
	for (;;) {
		if (N % i == 0) {
			N /= i;
			printf("%d\n", i);
		}
		else { i++; }
		if (N == 1) {
			break;
		}
	}
	return 0;
}