int main() {
	int N;//시험본 과목 개수
	int score[1000] = { 0, };
	double sum = 0;
	int max = 0;
	int i;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &score[i]);
		sum += score[i];
		if (max < score[i]) {
			max = score[i];
		}
	}

	printf("%lf", (double)((sum/(max*N))*100));
	return 0;
}