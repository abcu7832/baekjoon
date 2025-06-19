#include <stdio.h>

int main() 
{
	int N;
	scanf("%d", &N);//(3 ≤ N ≤ 5000)
	int min_N;
	int div3 = 0, div5 = 0;
	int input = N;

	for (;;)
	{
		if (N % 5 == 0)
		{
			div5 = N / 5;
			min_N = div5 + div3;
			break;
		}
		if (N < 3)
		{
			min_N = -1;
			break;
		}
		N -= 3;
		div3++;
	}
	printf("%d", min_N);
	return 0;
}
