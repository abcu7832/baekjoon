int main()
{ 
	int T;
	scanf("%d", &T);
	int i;//   (0 < N ≤ M < 30)
	int *M = malloc(sizeof(int)*T), *N = malloc(sizeof(int)*T);
	for (i = 0; i < T; i++) {
		scanf("%d %d", &N[i], &M[i]);
	}

	for (i = 0; i < T; i++) {
		//다리의 개수 N[i]
		int s;
		long long int m = 1;//m!
		long long int m_n = 1;//(m-n)!
		int k;
		if (N[i] >= M[i] - N[i]) {
			k = N[i];
		}
		else {
			k = M[i] - N[i];
		}
		//   (0 < N ≤ M < 30)
		for (s = k + 1; s <= M[i]; s++) {
			m *= s;
		}

		for (s = 1; s <= M[i] - k; s++) {
			m_n *= s;
		}
		int sum = (int)(m / (m_n));
		printf("%d\n", sum);
	}
	// 29팩토리얼 => 31자리 값
	free(M);
	free(N);
	return 0;
}