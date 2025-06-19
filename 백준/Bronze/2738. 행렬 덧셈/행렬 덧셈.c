int main() {
	int N, M;
	int arr1[100][100];
	int arr2[100][100];
	scanf("%d %d", &N, &M);//행렬의 크기

	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < M; j++) {
			printf("%d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}