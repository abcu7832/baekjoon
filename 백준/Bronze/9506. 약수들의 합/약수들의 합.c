#include <stdio.h>

int main() {
	while(1){
		int n = 0;//입력받을 변수  (2 < n < 100,000)
		int sum = 0;
		int i, j = 0;
		int cnt = 0;//약수의 개수가 몇개인지

		scanf("%d", &n);

		if (n == -1) { break; }

		for (i = 1; i < n/2 + 1; i++) {
			if (n%i == 0) {
				sum += i;
				cnt++;
			}
		}
		if (sum == n) {
			printf("%d = ", n);
			for (i = 1; i < n/2 + 1; i++) {
				if (n%i == 0) {
					printf("%d", i);
					j++;
					if (j != cnt) {
						printf(" + ");
					}
				}
			}
		}
		else { printf("%d is NOT perfect.", n); }
		printf("\n");
	}
	return 0;
}