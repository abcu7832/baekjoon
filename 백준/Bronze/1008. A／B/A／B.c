int main() {
	int a, b;
	scanf("%d %d", &a, &b);// 0<A, B<10

	printf("%.25llf", (long double)((long double)(a) / (long double)(b)));
	return 0;
}