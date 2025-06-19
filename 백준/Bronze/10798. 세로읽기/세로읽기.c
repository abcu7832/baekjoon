#include <stdio.h>
#include <string.h>
int main() {
	int i, j;
	char word[5][16];
	
	for (i = 0; i < 5; i++) {
		scanf("%s", word[i]);
	}
	for (j = 0; j < 15; j++) {
		for (i = 0; i < 5; i++) {
			if (strlen(word[i])>j) { printf("%c", word[i][j]); }
		}
	}
	return 0;
}