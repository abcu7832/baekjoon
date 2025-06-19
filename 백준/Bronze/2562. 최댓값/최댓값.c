int main() {
	int N, a[9] = { 1000001, };//1<=N<=1000000
	int  max = -1000000;//모든 정수는 -백만에서 +백만 사이의 값을 갖음
	int i;

	for (i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 9; i++) {
		if (a[i] > max) { 
            max = a[i]; 
            N = i; 
        }
	}
	printf("%d\n%d", max, N+1);
	return 0;
}