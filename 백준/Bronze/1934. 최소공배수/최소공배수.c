#include <stdio.h>

int find(int A, int B) {
	int temp;
	int i = B;

	if (A < B) {//무조건 A가 더 크게
		temp = A;
		A = B;
		B = temp;
}

	for (;;) {
		if (i == 1) { break; }
		if ((A%i == 0) && (B%i == 0)) {//공약수
			break;
		}
		i--;
	}
	return (int)((A * B) / i);
}
int main() {
	int T;//(1 ≤ T ≤ 1,000)
	int A[1000] = { 0, }, B[1000] = { 0, };// (1 ≤ A, B ≤ 45,000)
	int i;

	scanf("%d", &T);

	for (i = 0; i < T; i++) {
		scanf("%d %d", &A[i], &B[i]);
	}
	for (i = 0; i < T; i++) {
		printf("%d\n", find(A[i], B[i]));
	}
	return 0;
}