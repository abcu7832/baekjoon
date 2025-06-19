int main()
{
	int N;//1000이하
	scanf("%d", &N);
	int num[1000] = {0,};//점수
	int k;//N이하
	int i, j;

	scanf("%d", &k);//상위 k명

	for (i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	
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

	printf("%d", num[N - k]);
	return 0;
}