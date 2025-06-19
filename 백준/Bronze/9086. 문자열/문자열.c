int main() {
	char S[1000], a, b;
	int T, j = 0, cnt = 0;

	scanf("%d", &T);//테스트 케이스의 개수
	for (int i = 0; i < T; i++) {
		scanf("%s", S);
		j = 0;
		for (;;) {
			if ((S[j] >= 'A') && (S[j] <= 'Z')) {
				j++;
			}
			else {
				j--;
				printf("%c%c\n", S[0], S[j]);
				break;
			}
		}
	}
	return 0;
}