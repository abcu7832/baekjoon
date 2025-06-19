int main() 
{
	// 카드의 합이 21을 넘지 않는 한도 내 카드의 합을 최대한 크게 만드는 게임
	int N, M;//카드의 개수 N(3 ≤ N ≤ 100), M(10 ≤ M ≤ 300,000)
	int i, j, k;
	int MAX_SUM = 0;
	int card[100] = { 0, };

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++) {
		scanf("%d", &card[i]);
	}

	for (i = 0; i < N - 2; i++) {
		for (j = i + 1; j < N - 1; j++) {
			for (k = j + 1; k < N; k++) {
				int sum = card[i] + card[j] + card[k];
				if ((sum>MAX_SUM) && (sum <= M)) {
					//printf("%d\n", MAX_SUM);
					MAX_SUM = sum;
				}
			}
		}
	}
	printf("%d", MAX_SUM);
	return 0;
}