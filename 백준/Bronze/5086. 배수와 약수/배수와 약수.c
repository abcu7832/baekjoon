#include <stdio.h>

int main() {
	while (1) {
		int A, B;
		//1 ≤ A, B ≤ 10,000
		scanf("%d %d", &A, &B);
		if ((A == 0) && (B == 0)) { break; }
		else if ((A > B) && (A % B == 0)) { printf("multiple\n"); }
		else if ((A < B) && (B % A == 0)) { printf("factor\n"); }
		else if ((A % B != 0) || (B % A != 0)) { printf("neither\n"); }
	}
	return 0;
}