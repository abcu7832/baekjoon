long long int FACTORIAL(int N) {
	long long int result = 1;
	int i;
	for (i = 1; i <= N; i++) {
		result *= i;
	}
	return result;
}
int main()
{ 
	int N;
	scanf("%d", &N);
	
	printf("%lld", FACTORIAL(N));

	return 0;
}
