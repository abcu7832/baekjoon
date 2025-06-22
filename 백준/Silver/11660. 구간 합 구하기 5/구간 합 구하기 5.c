#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, M;// N: 1024이하, M: 10만이하
	scanf("%d %d", &N, &M);

	int **num = malloc(sizeof(int*)*N);
	int **prefix = malloc(sizeof(int*)*N);
	int i, j;
	for (i = 0; i < N; i++) {
		num[i] = (int*)malloc(sizeof(int)*N);
		prefix[i] = (int*)calloc(N, sizeof(int));
	}//num[N][N]
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &num[i][j]);
		}
	}
	int *x1 = malloc(sizeof(int)*M);
	int *x2 = malloc(sizeof(int)*M);
	int *y1 = malloc(sizeof(int)*M);
	int *y2 = malloc(sizeof(int)*M);
	for (i = 0; i < M; i++) {
		scanf("%d %d %d %d", &x1[i], &y1[i], &x2[i], &y2[i]);
		--x1[i]; --y1[i]; --x2[i]; --y2[i];
	}
	// 직사각형 범위로 누적합 => 미리 말해줘야지...
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (i == 0 && j == 0) {
				prefix[i][j] = num[i][j];
			}
			else if (i == 0) {
				prefix[i][j] = prefix[i][j - 1] + num[i][j];
			}
			else if (j == 0) {
				prefix[i][j] = prefix[i - 1][j] + num[i][j];
			}
			else {
				prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + num[i][j];
			}
		}
	}

	for (i = 0; i < M; i++) {
		if (x1[i] == 0 && y1[i] == 0) {
			printf("%d\n", prefix[x2[i]][y2[i]]);
		}
		else if (x1[i] == 0) {
			printf("%d\n", prefix[x2[i]][y2[i]] - prefix[x2[i]][y1[i] - 1]);
		}
		else if (y1[i] == 0) {
			printf("%d\n", prefix[x2[i]][y2[i]] - prefix[x1[i] - 1][y2[i]]);
		}
		else {
			printf("%d\n", prefix[x2[i]][y2[i]]
				- prefix[x1[i] - 1][y2[i]]
				- prefix[x2[i]][y1[i] - 1]
				+ prefix[x1[i] - 1][y1[i] - 1]);
		}
	}

	return 0;
}
