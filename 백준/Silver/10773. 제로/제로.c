int main() {
	int K;
	scanf("%d", &K);//십만이하
	int* num = calloc(K, sizeof(int));
	int ptr = -1;
	while (K) {
		int integer;
		scanf("%d", &integer);
		if (integer > 0) {
			ptr++;
			num[ptr] = integer;
		}
		else {
			num[ptr] = 0;
			ptr--;
		}
		K--;
	}
	int i;
	int sum = 0;
	for (i = 0; i < ptr + 1; i++) {
		sum += num[i];
	}
	printf("%d", sum);
	return 0;
}