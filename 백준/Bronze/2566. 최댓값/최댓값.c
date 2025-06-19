#include <stdio.h>

int main() {
	int i, j;
	int arr[9][9];
	int MAX = 0;
	int MAX_i = 0, MAX_j = 0;
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (MAX < arr[i][j]) {
				MAX = arr[i][j];
				MAX_i = i;
				MAX_j = j;
			}
		}
	}
	printf("%d\n", MAX);
	printf("%d %d", MAX_i + 1, MAX_j + 1);
	return 0;
}