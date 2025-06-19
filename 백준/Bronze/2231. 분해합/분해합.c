int main() 
{
	int N;//자연수 N(1 ≤ N ≤ 1,000,000)
	//아무리 합이 크더라도 54이하임!!!
	scanf("%d", &N);
	int M1, M2 = N - 54;
	
	// M의 각 자릿수 합
	for (;;) {
		M1 = M2;
		int M_SUM = 0;
		M_SUM += M1;
		for (;;) {
			M_SUM += M1 % 10;
			M1 /= 10;
			if (M1 == 0) { break; }
		}
		if (N == M_SUM) {
			printf("%d", M2);
			break;
		}
		if (M2 == N) {
			printf("0");
			break;
		}
		//printf("%d %d\n", M2, M_SUM);
		M2++;
	}
	return 0;
}

