#include <stdio.h>

int main() {
	int x, y, w, h;
	int d = 0;
	
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	int a, b;

	if (x < w / 2 + 1) {
		if (y < h / 2 + 1) { if (x < y) { d = x; } else { d = y; } }
		else { if (x < h - y) { d = x; } else { d = h - y; } }
	}
	else {
		if (y < h / 2 + 1) { if (w - x < y) { d = w - x; } else { d = y; } }
		else { if (w - x < h - y) { d = w - x; } else { d = h - y; } }
	}
	printf("%d", d);
	return 0;
}