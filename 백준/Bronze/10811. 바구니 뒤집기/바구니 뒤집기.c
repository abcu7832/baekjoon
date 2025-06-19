int main() {
	int N, M;//  1<=N<=100,   1<=M<=100
	int a[100] = { 0, }, b[100] = { 0, };
	int i = 0, j, k, s, x;
	
	scanf("%d %d", &N, &M);//N, M 입력받기
	
	for (k = 0; k < 100; k++) {
		a[k] = k + 1;
	}
	for (k = 0; k < M; k++) {
		scanf("%d %d", &i, &j);//1 <= i <= j <= 100
		x = 0;
		for (s = N - 1; s >= 0; s--) {
			if ((s >= i - 1) && (s <= j - 1)) {
				b[i - 1 + (x++)] = a[s];
			}
			else {
				b[s] = a[s];
			}
		}
		for (s = 0; s < N; s++) {
			a[s] = b[s];
		}
	}
	for (s = 0; s < N; s++) {
		printf("%d ", a[s]);
	}
	return 0;
}