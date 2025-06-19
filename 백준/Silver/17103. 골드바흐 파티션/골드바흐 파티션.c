#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	int *N = malloc(sizeof(int)*T);//정수 N은 짝수이고, 2 < N ≤ 1,000,000
	int *cnt = malloc(sizeof(int)*T);
	int i;
	for (i = 0; i < T; i++) {
		scanf("%d", &N[i]);
		cnt[i] = 0;
	}
	int j, k, l;

	for (j = 0; j < T; j++) {// i개의 cnt 찾기
		int *prime = malloc(sizeof(int)*(N[j]+1));// 0 ~ 1000000

		for (k = 0; k <= N[j]; k++) {
			prime[k] = 1;
		}
		prime[0] = 0; prime[1] = 0;//0과1은 항상 소수가 아님.

		for (k = 2; k * k <= N[j]; k++) {
			if (prime[k]) {
				for (l = k * k; l <= N[j]; l += k) {
					prime[l] = 0;
				}
			}
		}
		
		int num1 = N[j] - 2, num2 = 2;// num1 + num2 == N[j]

		while (num1 >= num2) {
			if (prime[num1] && prime[num2]) {
				if (num1 + num2 == N[j]) {
					cnt[j]++;
				}
			}
			num1--;
			num2++;
		}
		printf("%d\n", cnt[j]);
		free(prime);
	}
	free(N);
	free(cnt);
	return 0;
}