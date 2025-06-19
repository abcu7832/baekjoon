#include <stdio.h>

int main() {
	int a, b, c;// (1 ≤ a, b, c ≤ 100)
	// 각 막대의 길이를 마음대로 줄일 수 있다.
	scanf("%d %d %d", &a, &b, &c);
	int max = 0;
	int len;
	if (max < a) { max = a; }
	if (max < b) { max = b; }
	if (max < c) { max = c; }

	for (;;) {
		//printf("%d %d %d %d\n", a, b, c, max);
		if (max == a) {  
			if (max >= b + c) { max--; a--; }
			else { len = max + b + c; break; }
		}
		else if (max == b) {  
			if (max >= c + a) { max--; b--; }
			else { len = max + c + a; break; }
		}
		else { 
			if (max >= a + b) { max--; c--; }
			else { len = max + a + b; break; }
		}
	}
	printf("%d", len);
	return 0;
}