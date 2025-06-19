int main() {
	int a1, a0;
	int c;
	int n0;

	scanf("%d %d", &a1, &a0);
	scanf("%d", &c);
	scanf("%d", &n0);

	int i;
	int check;
	for (i = n0; i < 201; i++) {
		if (a0 <= (c - a1) * i) {
			check = 1;
		}
		else {
			check = 0;
			break;
		}
	}
	printf("%d", check);
	
	return 0;
}