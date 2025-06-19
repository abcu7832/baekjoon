int main() {
	int A, s;
	scanf("%d", &A);

	if (((A % 4 == 0)&&(A%100!=0))||(A%400==0)) { s = 1; }
	else { s = 0; }
	printf("%d", s);

	return 0;
}
