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
	return (int)(A * (B / i));
}
int find_gong(int A, int B) {//공약수 찾는 함수
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
	return i;
}
int main() {
	int A[2], B[2];//A분자, B분모 모두 30,000 이하이다.
	int s1, s2, s3;
	int i;
	//분수의 합
	for (i = 0; i < 2; i++) {
		scanf("%d %d", &A[i], &B[i]);
	}
	//기약분수
	s1 = (A[0] * B[1] + A[1] * B[0]);
	s2 = B[0] * B[1];
	s3 = find_gong(s1, s2);//분자와 분모사이의 최대공약수
	printf("%d %d", s1 / s3, s2 / s3);
	
	return 0;
}