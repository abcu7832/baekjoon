#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	//N,M<=10^5
	//1<=i,j<=N
	int *num = malloc(sizeof(int)*N);
	int i, j;
	for (i = 0; i < N; i++) {
		scanf("%d", &num[i]);
		//printf("%d\n", num[i]);
	}//두번째 줄
	int k;
	int *sum = malloc(sizeof(int)*M);//sum[M]
	//그 뒤
	//누적합 알고리즘 사용
	int *prefix = malloc(sizeof(int)*N);
	prefix[0] = num[0];
	for (k = 1; k < N; k++) {
		prefix[k] = prefix[k - 1] + num[k];
	}
	for (k = 0; k < M; k++) {
		scanf("%d %d", &i, &j);
		sum[k] = 0;
		i--; j--;
		if (i == 0) {
			sum[k] = prefix[j];
		}
		else {
			sum[k] = prefix[j] - prefix[i - 1];
		}
	}
	for (k = 0; k < M; k++) {
		printf("%d\n", sum[k]);
	}
	free(num);
	free(sum);
	free(prefix);
	return 0;
}