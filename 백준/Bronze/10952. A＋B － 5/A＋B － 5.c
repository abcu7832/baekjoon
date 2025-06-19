int main() {
	int i, j;
	
	for (;;) {
		scanf("%d %d", &i, &j);
		if ((i == 0) && (j == 0)) { break; }
		printf("%d\n", i + j);
	}
	return 0;
}