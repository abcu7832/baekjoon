int main() {
	int N, x, i, a[10000] = {0,};//1<=N,x<=10000

	scanf("%d %d", &N, &x);

	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < N; i++) {
		if (a[i] == 0) { break; }
		if (a[i] < x) { printf("%d ", a[i]); }
	}
	return 0;
}