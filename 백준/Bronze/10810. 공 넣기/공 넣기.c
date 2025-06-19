int main() {
	int N, M;//입력
	int  a[100] = { 0, };
	int i, s, j, k;//1<=i<=j<=N, 1<=k<=N
	int q;

	scanf("%d %d", &N, &M);// 바구니 N개, M번(횟수)
	
	for (i = 0; i < M; i++) {
		scanf("%d %d %d", &s, &j, &k);//  s ~ j k번의 공 넣기 
		for (q = s-1; q <= j-1; q++) {
			a[q] = k;//k라는 공을 바구니에 넣음
		}
	}
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}