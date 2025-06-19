int main() {
	int T, i;
	int sum = 0;

	char s[100];

	//'1'=> 49

	//scanf("%c", &s[0]);
	//printf("%d", s[0]);
	scanf("%d", &T);//숫자의 개수
	
	for (i = 0; i < T; i++) {
		scanf(" %c", &s[i]);
	}
	for (i = 0; i < T; i++) {
		sum += s[i] - 48;
	}
	printf("%d", sum);
	return 0;
}