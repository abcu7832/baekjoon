int main()
{
	int *num = malloc(sizeof(int)*5);
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum += num[i];
	}
	sum /= 5;
	int j;
	for (j = 0; j < 4; j++)
	{
		for (i = j + 1; i < 5; i++)
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
	printf("%d\n", sum);
	for (i = 0; i < 5; i++)
	{
		if (i == 2)
		{
			printf("%d", num[i]);
		}
	}
	return 0;
}