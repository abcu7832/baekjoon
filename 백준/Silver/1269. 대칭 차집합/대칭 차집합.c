#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	//각 집합의 원소의 개수는 200,000을 넘지 않으며, 모든 원소의 값은 100,000,000을 넘지 않는다.
	int A, B;
	scanf("%d %d", &A, &B);
	int *A_value = malloc(sizeof(int)*A);
	int *B_value = malloc(sizeof(int)*B);
	char *num = calloc(100000001, sizeof(char));//자동으로 0으로 초기화시켜줌

	int i;
	for (i = 0; i < A; i++) {
		scanf("%d", &A_value[i]);
		num[A_value[i]] = 1;
	}
	
	for (i = 0; i < B; i++) {
		scanf("%d", &B_value[i]);
		if (num[B_value[i]]) { num[B_value[i]] = 2; }//겹치는 부분
		else { num[B_value[i]] = 1; }
	}
	int A_cnt = 0, B_cnt = 0;
	for (i = 0; i < A; i++) {
		if (num[A_value[i]] == 1) {
			A_cnt++;
		}
	}
	for (i = 0; i < B; i++) {
		if (num[B_value[i]] == 1) {
			B_cnt++;
		}
	}
	printf("%d", A_cnt + B_cnt);
	free(A_value);
	free(B_value);
	free(num);
	return 0;
}