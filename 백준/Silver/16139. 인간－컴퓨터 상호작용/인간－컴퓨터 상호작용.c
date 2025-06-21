#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *str = malloc(sizeof(char) * 200001);//알파벳소문자만
	scanf("%s", str);
	int len = strlen(str);
	int s;
	int q;
	scanf("%d", &q);// 질문 수 <= 2 * 10^3
	int **prefix = (int**)malloc(sizeof(int*)*len);
	for (s = 0; s < len; s++) {
		prefix[s] = (int*)malloc(sizeof(int) * 26);
	}// prefix[len][26]
	for (s = 0; s < 26; s++) {
		if (str[0] == 'a' + s) {
			prefix[0][s] = 1;
		}
		else { 
			prefix[0][s] = 0; 
		}
	}
	int k;
	for (s = 1; s < len; s++) {
		for (k = 0; k < 26; k++) {
			if (str[s] == 'a' + k) {
				prefix[s][k] = prefix[s - 1][k] + 1;
			}
			else { prefix[s][k] = prefix[s - 1][k]; }
		}
	}

	/*for (k = 0; k < 26; k++) {
		printf("%c = %d\n", 'a' + k, prefix[len - 1][k]);
	}*/

	int i, j;
	char letter;
	int *sum = malloc(sizeof(int)*q);

	for (s = 0; s < q; s++) {		
		scanf(" %c %d %d", &letter, &i, &j);
		if (i == 0) { sum[s] = prefix[j][letter - 'a']; }
		else { sum[s] = prefix[j][letter - 'a'] - prefix[i - 1][letter - 'a']; }
	}

	for (s = 0; s < q; s++) {
		printf("%d\n", sum[s]);
	}
	free(prefix);
	free(str);
	free(sum);
	return 0;
}