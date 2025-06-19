int main()
{
	int N;// 1,000,000이하
	scanf("%d", &N);
	int *num = malloc(sizeof(int)*N);//절댓값이 1,000,000보다 작거나 같은 정수
	int *arr = malloc(sizeof(int) * 2000001);
	int i, j;

	for (i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	//-10^6 ~ 10^6
	for (i = 0; i <= 2000000; i++) {
		arr[i] = 0;
	}
	for (i = 0; i < N; i++)
	{
		arr[num[i] + 1000000] = 1;
	}

	for (i = 0; i <= 2000000; i++)
	{
		if (arr[i])
		{
			printf("%d\n", i - 1000000);
		}
	}
	free(num);
	return 0;
}