#include <stdio.h>
#include <string.h>
int sqr(int A, int B) {
	int sum = 1;
	for (int i = 0; i < B; i++) {
		sum *= A;
	}
	return sum;
}
int main() {
	char N[10000];//10억보다 항상 작기 때문에
	int B;//(2 ≤ B ≤ 36)
	int sum = 0;
	int i, j;
	
	scanf("%s", N);
	scanf("%d", &B);

	int len = strlen(N);//N의 길이

	for (i = 0; i < len; i++) {
		j = len - 1 - i;

		if ((N[i] >= 'A') && (N[i] <= 'Z')) {
			sum += sqr(B, j) * (int)(N[i] - 55);
		}
		else if ((N[i] >= '0') && (N[i] <= '9')) {
			sum += sqr(B, j) * (int)(N[i] - 48);
		}
	}
	printf("%d", sum); 
	return 0;
}