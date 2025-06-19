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
	int N;//수의 개수 100이하
	int num[1000] = { 0, };//1,000 이하의 자연수
	int i;
	int cnt = 0;
	//주어진 수 중에서 소수의 개수 찾기

	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &num[i]);
		cnt += count(num[i]);
	}
	printf("%d", cnt);

	return 0;
}