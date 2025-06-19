int main()
{
	int M, N;
	scanf("%d %d", &M, &N);//M이상 N이하의 소수

	int *arr = malloc(sizeof(int) * (N + 1));
	int i, j;

	for (i = 0; i <= N; i++) {
		arr[i] = 1;
	}
	arr[0] = arr[1] = 0;
	int MAX = 0;
	int MIN = N;
	//소수인지 판별
	for (i = 2; i <= sqrt(N); i++)
	{
		for (j = i * i; j <= N; j += i)
		{
			if (arr[j])
			{
				arr[j] = 0;// j: 소수가 아닌 수
			}
		}
	}
	for (i = M; i <= N; i++)
	{
		if ((arr[i]))
		{
			MIN = i;
			break;
		}
	}
	for (i = N; i >= M; i--)
	{
		if ((arr[i]))
		{
			MAX = i;
			break;
		}
	}
	for (i = MIN; i <= MAX; i++)
	{
		if (arr[i])//TRUE
		{
			printf("%d\n", i);
			if (i == MAX)
			{
				break;
			}
		}
	}
	return 0;
}