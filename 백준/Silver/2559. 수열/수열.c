int main() {
	int N, K;
	scanf("%d %d", &N, &K);
	// N은 2 이상 10^5 이하 /  K는 연속적인 날짜의 수  K는 1과 N 사이의 정수
	//둘째 줄에는 매일 측정한 온도를 나타내는 N개의 정수 -100 이상 100 
	int *num = malloc(sizeof(int)*N);//온도
	int i, j;
	for (i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}//두번째 줄 입력
	//누적합 알고리즘 사용
	int *prefix = malloc(sizeof(int)*N);
	prefix[0] = num[0];
	int k;
	for (k = 1; k < N; k++) {
		prefix[k] = prefix[k - 1] + num[k];
	}
	int ptr = 0;
	long long int MAX = -100 * K;//음수일수도있네..

	while (ptr < N - K + 1) {
		int sum = 0;
		if (ptr == 0) {
			sum = prefix[K - 1];
		}
		else {
			sum = prefix[ptr + K - 1] - prefix[ptr - 1];
		}
		if (MAX < sum) {
			MAX = sum;
		}
		//printf("%d %d\n", ptr, sum);
		ptr++;
	}
	
	printf("%lld", MAX);
	
	free(num);
	free(prefix);
	return 0;
}