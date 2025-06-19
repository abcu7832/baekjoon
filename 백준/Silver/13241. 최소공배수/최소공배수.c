#include <stdio.h>

long long int find_lld(long long int A, long long int B) {
	long long int temp;
	long long int i = B;

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
	return (long long int)(A * (B / i));
}
int main() {
	long long int A, B;
	//50%의 입력 중 A와 B는 1000(10^3)보다 작다. 다른 50%의 입력은 천(10^3)보다 크고 억(10^8)보다 작다.
	//추가: 큰 수 입력에 대하여 변수를 64비트 정수로 선언하시오. C/C++에서는 long long int를 사용
	scanf("%lld %lld", &A, &B);
	
	printf("%lld\n", find_lld(A, B));
	
	return 0;
}