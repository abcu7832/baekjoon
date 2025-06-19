int main() {
	int c, m, p;
	scanf("%d %d", &c, &m);
	scanf("%d", &p);

	if (p+m >=60) {
		c += (p + m) / 60;
		m = (m + p) % 60;
	}
	else {
		m += p;
	}
	if (c >= 24) {
		c = c % 24;
	}
	printf("%d %d", c, m);

	return 0;
}