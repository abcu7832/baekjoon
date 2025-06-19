#include <stdio.h>

int main() {
	//흰도화지 100x100
	//검은색종이 10x10
	int i, j, k;
	int N;
	int white[100][100] = { 0, };//0이면 아직 흰색
	int black[100][2];//[0]=>x축 [1]=>y축
	int sum = 0;

	scanf("%d", &N);//검은색종이 N개
	for (i = 0; i < N; i++) {
		scanf("%d %d", &black[i][0], &black[i][1]);
	}

	for (i = 0; i < N; i++) {
		for (j = black[i][0]; j < black[i][0] + 10; j++) {
			for (k = black[i][1]; k < black[i][1] + 10; k++) {
				white[j][k] = 1;
			}
		}
	}
	for (i = 0; i < 100; i++) {
		for (j = 0; j < 100; j++) {
			if (white[i][j] == 1) {
				sum++;
			}
		}
	}
	
	printf("%d", sum);
	return 0;
}