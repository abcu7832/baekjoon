int main() {
	int A;
	scanf("%d", &A);

	A = A / 10;

	if (A >= 9) { printf("A"); }
	else if (A >= 8) { printf("B"); }
	else if (A >= 7) { printf("C"); }
	else if (A >= 6) { printf("D"); }
	else { printf("F"); }
	return 0;
}