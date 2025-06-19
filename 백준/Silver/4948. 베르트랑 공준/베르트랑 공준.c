int main()
{
	int *n = malloc(sizeof(int) * 123456);
	int i = 0;
	//i는 입력받은 개수
	for (;;) {
		scanf("%d", &n[i]);
		if (n[i] == 0) {
			break;
		}
		i++;
	}
	
	int j, k, l;
	//cnt초기화
	int *cnt = malloc(sizeof(int)*i);
	for (j = 0; j < i; j++) {
		cnt[j] = 0;
	}

	for (j = 0; j < i; j++) {// i개의 cnt 찾기
		//printf("%d %d : ", n[j], 2*n[j]);
		int *prime = malloc(sizeof(int)*(2 * n[j] + 1));// 0 ~ 2 * n[j]

		for (k = 0; k <= 2 * n[j]; k++) {
			prime[k] = 1;
		}
		prime[0] = 0; prime[1] = 0;//0과1은 항상 소수가 아님.

		for (k = 2; k * k <= 2 * n[j]; k++) {
			if (prime[k]) {
				for (l = k * k; l <= 2 * n[j]; l += k) {
					prime[l] = 0;
				}
			}
		}
		for (k = 0; k <= n[j]; k++) {
			prime[k] = 0;
		}

		for (k = n[j]; k <= 2 * n[j]; k++) {
			if (prime[k]) {
				cnt[j]++;
			}
		}
		printf("%d\n", cnt[j]);
		free(prime);
	}
	free(cnt);
	free(n);
	return 0;
}