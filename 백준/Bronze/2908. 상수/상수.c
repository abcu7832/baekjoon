int pow(int A, int s) {
	int i = 0;

	for (i = 1; i < s; i++) {
		A *= A;
	}
	if (s <= 0) { A = 1; }
	return A;
}
int main()
{
	int A, B;
	int lA = 0, lB = 0;
	scanf("%d %d", &A, &B);

	for (int j = 0; j <= 3; j++) {
		//printf("A = %d, B = %d\n", A, B);
		//printf("lA = %d, lB = %d\n", lA, lB);
		lA += (A % 10)*pow(10, 2 - j);
		A = A / 10;
		lB += (B % 10)*pow(10, 2 - j);
		B = B / 10;
	}
	if (lA > lB) { printf("%d", lA); }
	else { printf("%d", lB); }
	
	return 0;
}