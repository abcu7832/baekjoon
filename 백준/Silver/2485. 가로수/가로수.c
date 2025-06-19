#include <stdio.h>

int main()
{
	int N;//이미 심어져 있는 가로수의 수를 나타내는 하나의 정수 N
	scanf("%d", &N);
	// 둘째 줄부터 N개의 줄에는 각 줄마다 심어져 있는 가로수의 위치가 양의 정수로 주어지며, 
	// 가로수의 위치를 나타내는 정수는 1,000,000,000 이하
	int i;
	// 3 ≤ N ≤ 100,000
	int *tree = malloc(sizeof(int)*N);

	// N개의 가로수는 기준점으로부터 떨어진 거리가 가까운 순서대로 주어진다.
	for (i = 0; i < N; i++) {
		scanf("%d", &tree[i]);
	}
		
	int gap = tree[1] - tree[0];
	for (i = 2; i < N; i++) {
		int diff = tree[i] - tree[i - 1];
		while (diff != 0) {
			int temp = gap % diff;
			gap = diff;
			diff = temp;
		}
	}
	int sum = ((tree[N - 1] - tree[0]) / gap) + 1 - N;
	printf("%d", sum);

	free(tree);
	
	return 0;
}