int main()
{
	int A[6] = { 1, 1, 2, 2, 2, 8 };//킹, 퀸, 룩, 비숍, 나이트, 폰
	int B[6] = { 0, };
	int i;
	//킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개
	for (i = 0; i < 6; i++) {
		scanf("%d", &B[i]);
	}
	for (i = 0; i < 6; i++) {
		printf("%d ", A[i] - B[i]);
	}

	return 0;
}
