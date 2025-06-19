int main() {
	int N, M;//입력
	int  a[100] = { 0, };
	int i, j, k;//1<=i<=j<=N, 1<=k<=N
	int temp;
	
	for (k = 0; k < 100; k++) {
		a[k] = k + 1;
	}
	scanf("%d %d", &N, &M);//N개 M번교환
	for (k = 0; k < M; k++) {
		scanf("%d %d", &i, &j);
		//공 교환
		i--;
		j--;
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}