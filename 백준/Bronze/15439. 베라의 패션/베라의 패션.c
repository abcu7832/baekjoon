int main()
{ 
	int N;//1 ≤ N ≤ 2017
	scanf("%d", &N);
	
	int i, j;
	int cnt = 0;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (i != j) {
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}