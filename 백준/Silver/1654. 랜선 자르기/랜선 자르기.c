int main() {
	int K, N;	// 1<=K<=10000   1<=N<=1000000    K<=N
	scanf("%d %d", &K, &N);
	int *len = malloc(sizeof(int)*K); // 2^(31)-1 이하
	int i, j;
	int max = 0;

	for (i = 0; i < K; i++) {
		scanf("%d", &len[i]);
		if (max < len[i]) { max = len[i]; }
	}
	long long low = 1;
	long long high = max;
	long long result=0;
	while (low <= high) {
		long long mid = (high + low) / 2;
		//printf("high:%d, low:%d, mid:%d\n", high, low, mid);
		long long sum = 0;
		for (j = 0; j < K; j++) {
			sum += (long long)(len[j]) / mid;
		}
		if (sum >= N) { low = mid + 1; result = mid; }
		else { high = mid - 1; }
	}
	printf("%lld\n", result);
	free(len);
	return 0;
}