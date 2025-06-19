int main() 
{
	// 정수 a,b,c,d,e,f가 -999이상 999이하
	int a, b, c, d, e, f;
	int x, y;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	
	for (x = -999; x <= 999; x++) {
		for (y = -999; y <= 999; y++) {
			if ((a*x + b * y == c) && (d*x + e * y == f)) {
				break;
			}
		}
		if ((a*x + b * y == c) && (d*x + e * y == f)) {
			break;
		}
	}
	printf("%d %d", x, y);
	return 0;
}