int n = 0;

int recursion(const char *s, int l, int r) {
	n++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s) {
	n = 0;
	return recursion(s, 0, strlen(s) - 1);
}

int main() {
	int N, i;
	scanf("%d", &N);
	char **str = (char**)malloc(sizeof(char*)*N);

	for (i = 0; i < N; i++) {
		str[i] = (char*)malloc(sizeof(char) * 1001);
		scanf("%s", str[i]);
	}
	for (i = 0; i < N; i++) {
		int result = isPalindrome(str[i]);
		printf("%d %d\n", result, n);
	}
	return 0;
}