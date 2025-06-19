int main() 
{
	int N;//N은 10,000보다 작거나 같은 자연수이다.
	scanf("%d", &N);

	int s = 666;

	while (N)
	{
		int num = s;
		for (;;)
		{
			if (num % 1000 == 666)
			{
				N--;
				break;
			}
			if (num == 0)
			{
				break;
			}
			num /= 10;
		}

		s++;
	}
	s--;
	printf("%d", s);
	return 0;
}
