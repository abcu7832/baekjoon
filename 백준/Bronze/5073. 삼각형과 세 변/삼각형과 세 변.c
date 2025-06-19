#include <stdio.h>

int main() {
	//삼각형의 세 변의 길이가 주어질 때 변의 길이에 따라 다음과 같이 정의한다.
	//Equilateral :  세 변의 길이가 모두 같은 경우
	//Isosceles : 두 변의 길이만 같은 경우
	//Scalene : 세 변의 길이가 모두 다른 경우
	while (1) {
		int A[3];
		int max = 0;
		int i, max_i;
		int sum = 0;

		scanf("%d %d %d", &A[0], &A[1], &A[2]);
		if ((A[0] == 0) && (A[1] == 0) && (A[2] == 0)) { break; }
		for (i = 0; i < 3; i++) {
			int temp;
			if (max < A[i]) {
				max = A[i];
				max_i = i;
			}
		}
		for (i = 0; i < 3; i++) {
			if (i != max_i) {
				sum += A[i];
			}
		}
		if (max >= sum) { printf("Invalid\n"); }
		else {
			if ((A[0] == A[1]) && (A[1] == A[2])) { printf("Equilateral\n"); }
			else if ((A[0] == A[1]) || (A[0] == A[2]) || (A[1] == A[2])) { printf("Isosceles\n"); }
			else { printf("Scalene\n"); }
		}
	}
	return 0;
}