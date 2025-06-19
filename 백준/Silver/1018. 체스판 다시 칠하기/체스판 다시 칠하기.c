int main(void)
{
//N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수
//둘째 줄부터 N개의 줄에는 보드의 각 행의 상태가 주어진다. B는 검은색이며, W는 흰색이다.
	int M, N;
	int i, j;
	char chess[50][51] = { 0, };// chess[x][50] = \0;
	char pattern1[8][8] = {
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'}
	};
	char pattern2[8][8] = {
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'}
	};
	scanf("%d %d", &M, &N);

	for (i = 0; i < M; i++)
	{
		scanf("%s", chess[i]);
	}
	int MIN = 2500;
	int a = 0, b = 0;

	while (1)
	{
		int error1 = 0;
		int error2 = 0;
		for (i = 0; i < 8; i++)
		{
			for (j = 0; j < 8; j++)
			{
				if (chess[a + i][b + j] != pattern1[i][j])
				{
					error1++;
				}
				if (chess[a + i][b + j] != pattern2[i][j])
				{
					error2++;
				}
			}
		}
		if (error1 > error2)
		{
			error1 = error2;
		}
		if (MIN > error1)
		{
			MIN = error1;
		}
		b++;
		if (b == N - 7)
		{
			b = 0;
			a++;
		}
		if (a == M - 7)
		{
			break;
		}

	}
	printf("%d", MIN);

	return 0;
}