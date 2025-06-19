int main() {
	int c, m;
	scanf("%d %d", &c, &m);

	if (m < 45) {
		c--;
		m += 15;
	}
	else {
		m -= 45;
	}
	if (c == -1) {
		c = 23;
	}
	printf("%d %d", c, m);

	return 0;
}