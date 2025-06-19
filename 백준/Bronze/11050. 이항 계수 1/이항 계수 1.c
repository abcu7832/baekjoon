int main()
{ 
	int N, K;// N:1~10, K:0~N
	scanf("%d %d", &N, &K);
	int n = 1;
	int i;
	for (i = 1; i <= N; i++) {
		n *= i;
	}
	int k = 1;
	for (i = 1; i <= K; i++) {
		k *= i;
	}
	int n_k = 1;
	for (i = 1; i <= N - K; i++) {
		n_k *= i;
	}
	int sum = (int)(n / (k*n_k));
	printf("%d", sum);
	return 0;
}