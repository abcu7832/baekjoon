int main() {
	int i, j = 0;
	char s[100];//단어
	int a[26] = { 0, };
	//'a' = 97

	for (i = 0; i < 26; i++) {
		a[i] = -1;
	}

	scanf("%s", s);

	for (;;) {
		if ((s[j] < 'a') || (s[j] > 'z')) { break; }//단어 s가 끝나면 반복문 종료
		else {
			for (i = 0; i < 26; i++) {
				if (('a' + i == s[j]) && (a[i] == -1)) {//('a' + i == s[j]) : s[j]가 소문자인지 확인용 //// (a[i] == -1) : a[i]에 값이 들어있는지 확인용
					a[i] = j;
					break;
				}
			}
		}
		j++;
	}
	for (i = 0; i < 26; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}