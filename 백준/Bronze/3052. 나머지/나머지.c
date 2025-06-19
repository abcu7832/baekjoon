int main() {
	int b[10] = { 0, };
	int k;
	
	for (k = 0; k < 10; k++) {//10개 입력
		scanf("%d", &b[k]);
		b[k] = b[k] % 42;// b 변수에 나머지 저장
	}
	int i, j, cnt = 0;
	for (i = 0; i < 9; i++) {
		for (j = i + 1; j < 10; j++) {
			if (b[i] > b[j]) {//나머지 오름차순 정리
				int temp;
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	for (i = 0; i < 9; i++) {
		if (b[i] == b[i + 1]) {//같은 경우 카운트
			cnt++;
		}
	}
	printf("%d", 10 - cnt);

	return 0;
}