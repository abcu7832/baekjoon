int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int answer = A * B * C;
	int num[10] = { 0, };
	while (answer > 0) {
		int rest = answer % 10;
		answer /= 10;
		num[rest]++;
	}
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}
	return 0;
}