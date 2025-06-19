int N, a[1000000] = { 1000001, };//1<=N<=1000000
int main() {

	int min = 1000000, max = -1000000;//모든 정수는 -백만에서 +백만 사이의 값을 갖음
	int i;

	scanf("%d", &N);//입력받기

	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < N; i++) {
		if (a[i] == 1000001) { break; }
		if (a[i] < min) { min = a[i]; }
		if (a[i] > max) { max = a[i]; }
	}
	printf("%d %d", min, max);
	return 0;
}