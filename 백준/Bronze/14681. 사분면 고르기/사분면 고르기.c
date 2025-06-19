int main() {
	int x, y, s;
	scanf("%d %d", &x, &y);

	if (x > 0) {
		if (y > 0) {
			s = 1;
		}
		else {
			s = 4;
		}
	}
	else {
		if (y > 0) {
			s = 2;
		}
		else {
			s = 3;
		}
	}
	printf("%d", s);

	return 0;
}