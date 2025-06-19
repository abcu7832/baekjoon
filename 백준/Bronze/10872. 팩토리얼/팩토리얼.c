int main()
{ 
	int N;//1 ≤ N ≤ 2017
	scanf("%d", &N);
	int n = 1;
	int i;
	for (i = 1; i <= N; i++) {
		n *= i;
	}
	printf("%d", n);
	return 0;
}