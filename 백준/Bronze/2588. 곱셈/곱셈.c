int main() {
	int A, B, C1, C2, C3, C4;
	
	scanf("%d %d", &A, &B);
	
	C1 = A * (B % 10);
	B /= 10;
	printf("%d\n", C1);
	C2 = A * (B % 10);
	B /= 10;
	printf("%d\n", C2);
	C3 = A * (B % 10);
	printf("%d\n", C3);
	C4 = 100 * C3 + 10 * C2 + C1;
	printf("%d", C4);
	return 0;
}