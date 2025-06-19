#include <stdio.h>

int main() {
	int a[3] = { 0, }, b[3] = { 0, };
	int i;
	int a_cnt[2] = { 0, }, b_cnt[2] = { 0, };
	int x, y;

	for (i = 0; i < 3; i++) {
		scanf("%d %d", &a[i], &b[i]);
		if (a[i] != a[0]) { x = a[i]; }
		if (b[i] != b[0]) { y = b[i]; }
	}
	for (i = 0; i < 3; i++) {
		if (a[i] == a[0]) { a_cnt[0]++; }
		else if (a[i] == x) { a_cnt[1]++; }
		if (b[i] == b[0]) { b_cnt[0]++; }
		else if (b[i] == y) { b_cnt[1]++; }
	}
	if (a_cnt[0] == 1) { x = a[0]; }
	if (b_cnt[0] == 1) { y = b[0]; }
	printf("%d %d", x, y);
	return 0;
}