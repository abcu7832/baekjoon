#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int N, M;// 오십만개 이하
	scanf("%d", &N);
	int *s = malloc(sizeof(int)*N);
	int i, j;
	int *num = calloc(20000001, sizeof(int));

	for (i = 0; i < N; i++) { //상근이가 가지고 있는 카드
		scanf("%d", &s[i]); 
	}
	for (i = 0; i < N; i++) { //상근이가 가지고 있는 카드
		num[s[i] + 10000000] = 1;//1로 선언
	}
	scanf("%d", &M);
	int *b = malloc(sizeof(int)*M);
	for (i = 0; i < M; i++) { 
		scanf("%d", &b[i]); 
		if (num[b[i] + 10000000]) {
			num[b[i] + 10000000] = 2;
		}
	}//비교할 카드
	for (i = 0; i < M; i++) {
		if (num[b[i]+10000000]==2) {
			printf("1 ");
		}
		else {
			printf("0 ");
		}
	}
	free(s);
	free(b);
	free(num);
	return 0;
}