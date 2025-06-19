int main()
{
	int N;
	scanf("%d", &N);//입력

	int *num = malloc(sizeof(int)*N);
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	int j;
	for (j = 0; j < N - 1; j++)
	{
		for (i = j + 1; i < N; i++)
		{
			if (num[j] > num[i])
			{
				int temp;
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		printf("%d\n", num[i]);
	}
	return 0;
}