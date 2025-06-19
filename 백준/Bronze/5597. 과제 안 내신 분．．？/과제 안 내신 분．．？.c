int main() {
	int a[28] = { 0, };
	int i, k, j = 0;
	
	for (k = 0; k < 28; k++) {//28개 입력
		scanf("%d", &a[k]);
	}
	for (k = 0; k < 30; k++) {
		for (i = 0; i < 29; i++) {
			if (i == 28) {//미제출한 사람 기억
				printf("%d", k + 1);
				j++;
				break;
			}
			if (k + 1 == a[i]) {
				break;
			}
		}
		if ((j == 1)&&(i==28)) { printf("\n"); }
	}
	return 0;
}