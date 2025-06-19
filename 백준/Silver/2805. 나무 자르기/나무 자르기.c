int main() {
	int N, M;

	scanf("%d %d", &N, &M);
	int *len = malloc(sizeof(int)*N);
	int i;
	int max = 0;
	for (i = 0; i < N; i++) {
		scanf("%d", &len[i]);
		if (max < len[i]) { max = len[i]; }
	}
	int low = 1;
	int high = max;
	int result = 0;
	while (low <= high) {
		int H = (low+high)/2;//절단기 높이
		long long sum = 0;
		for (i = 0; i < N; i++) {
			if (len[i] - H > 0) { sum += len[i] - H; }
		}
		if (sum >= M) {
			result = H;
			low = H + 1;
		}
		else { // sum<M
			high = H - 1;
		}
	}
	printf("%d", result);
	free(len);
	return 0;
}
