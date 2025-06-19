int main()
{
	int N;
	scanf("%d", &N);
	int *num = malloc(sizeof(int)*N);
	int i;
	int ans;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	if (N != 1)
	{
		int MAX = 2;
		int MIN = 1000000;
		for (i = 0; i < N; i++)
		{
			if (MIN > num[i])
			{
				MIN = num[i];
			}
			if (MAX < num[i])
			{
				MAX = num[i];
			}
		}
		ans = MIN * MAX;
	}
	else 
	{
		ans = num[0] * num[0];
	}
	printf("%d", ans);
	free(num);
	return 0;
}