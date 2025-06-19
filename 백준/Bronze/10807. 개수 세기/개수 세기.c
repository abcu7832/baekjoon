int main() {
	int N, i, a[100] = {101,}, s;
	int cnt = 0;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d ", &a[i]);
	}
	scanf("%d", &s);

	for (i = 0; i < N; i++) {
		if (a[i] == s) { cnt++; }
	}
	printf("%d", cnt);
	return 0;
}