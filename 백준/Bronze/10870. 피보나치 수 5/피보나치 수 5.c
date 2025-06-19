int PIBONATTI(int N) {
	int s1 = 0, s2 = 1;
	int n = 0;
	int i;
	for (i = 1; i <= N; i++) {
		n = s1 + s2;
		s1 = s2;
		s2 = n;
	}
	return s1;
}
int main()
{ 
	int N;
	scanf("%d", &N);
	
	printf("%d", PIBONATTI(N));

	return 0;
}