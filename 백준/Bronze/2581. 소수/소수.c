#include <stdio.h>

int count(int N) {
	int cnt = 0;
	int i;
	for (i = 1; i <= N; i++) {
		if (N%i == 0) {
			cnt++;
		}
	}
	if (cnt == 2) {
		return 1;//소수 맞으면
	}
	else {
		return 0;//소수 아니면
	}
}
int main() {
	int M, N;//M과 N은 10,000이하의 자연수
	//M이상 N이하의 자연수 중 소수인 것을 모두 찾아 
	//첫째 줄에 그 합, 둘째 줄에 그 중 최솟값을 출력
	int i;
	int min = 10001, sum = 0;
	//주어진 수 중에서 소수의 개수 찾기

	scanf("%d %d", &M, &N);
	for (i = M; i <= N; i++) {
		//printf("%d", i);
		if (count(i) == 1) {
			
			if (min > i) {
				min = i;
			}
			sum += i;
		}
	}
	if (min == 10001) { printf("-1"); }
	else { printf("%d\n%d", sum, min); }
	return 0;
}