int main() {
	char S[100];
	int i, j = 0;

	scanf("%s", S);//단어 S
	
	for (;;) {
		if (((S[j] >= 'A') && (S[j] <= 'Z')) || ((S[j] >= 'a') && (S[j] <= 'z'))) {
			j++;
		}
		else { break; }
	}
	printf("%d", j);
	return 0;
}