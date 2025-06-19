int main() {
	int N, i, a, b;
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		printf("Case %c%d: %d\n", 35, i + 1, a + b);
	}
	return 0;
}