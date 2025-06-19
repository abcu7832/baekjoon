#include <stdio.h>

int main() {
	int X, sum = 0;
	int i, N, a, b;

	scanf("%d", &X);//총 금액 십억이하
	scanf("%d", &N);//종류 개수
	
	for (i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);//백만이하
		sum += (a * b);
	}
	
	if (X == sum) { printf("Yes"); }
	else { printf("No"); }
	
	return 0;
}