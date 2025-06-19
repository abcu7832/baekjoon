#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N, M, i, j;

	scanf("%d", &N);//개수
	int *x = malloc(sizeof(int)*N);// 2MB
	// 1<=M,N<=500,000
	// -10,000,000<=x,y<=10,000,000

	for (i = 0; i < N; i++) {
		scanf("%d", &x[i]);
	}

	scanf("%d", &M);//개수
	int *y = malloc(sizeof(int)*M);// 2MB
	for (i = 0; i < M; i++) {
		scanf("%d", &y[i]);
	}

	int *num = malloc(sizeof(int)*20000001); // 80MB

	for (j = 0; j < 20000001; j++) {
		num[j] = 0;
	}

	for (i = 0; i < N; i++) {
		num[x[i]+10000000]++;
	}
	
	for (i = 0; i < M; i++) {
		printf("%d ", num[y[i] + 10000000]);
	}
	return 0;
}