#include <stdio.h>

int main() {
	int N;//개수 1 ≤ N ≤ 100,000
	int X[100000] = { 0, }, Y[100000] = { 0, };//각각의 좌표는 -10,000 이상 10,000 이하의 정수
	int i;
	int max_X = -100000, max_Y = -100000, min_X = 100000, min_Y = 100000;
	int O = 0;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d %d", &X[i], &Y[i]);
	}
	//printf("\n\n");
	for (i = 0; i < N; i++) {
		//printf("%d %d\n", X[i], Y[i]);
		if (X[i] > max_X) { max_X = X[i]; }
		if (X[i] < min_X) { min_X = X[i]; }
		if (Y[i] > max_Y) { max_Y = Y[i]; }
		if (Y[i] < min_Y) { min_Y = Y[i]; }
		//printf("%d %d %d %d\n", max_X, min_X, max_Y, min_Y);
	}
	
	if (N == 1) { O = 0; }
	else {O = (max_X - min_X)*(max_Y - min_Y);}
	printf("%d", O);

	return 0;
}