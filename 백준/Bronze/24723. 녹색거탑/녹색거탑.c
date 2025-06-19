int main()
{ 
	int N;//1 ≤ N ≤ 2017
	scanf("%d", &N);
	int n = 1;
	int i;
	for (i = 0; i < N; i++) {
		n *= 2;
	}
	printf("%d", n);
	return 0;
}