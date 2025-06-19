int POW(int A, int B) {
	int num=1;
	int i;
	for (i = 0; i < B; i++) {
		num *= A;
	}
	return num;
}
int main()
{
	//첫째 줄에 정렬하려고 하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.
	int N, s, i = 0;//N의 최대길이 int +-21억
	scanf("%d", &N);
	int number = N;
	for (;;) {
		if (number == 0) { break;}
		number /= 10;
		i++;
	}//N의 길이 찾기
	int num[10] = { 0, };
	int arr[10] = { 0, };
	i--;
	while (i >= 0)
	{
		num[i] = (int)(N / POW(10, i));
		N = N - num[i] * POW(10, i);
		arr[num[i]]++;
		i--;
	}
	for (s = 9; s >= 0; s--) {
		for (i = 0; i < arr[s]; i++) {
			printf("%d", s);
		}
	}
	return 0;
}