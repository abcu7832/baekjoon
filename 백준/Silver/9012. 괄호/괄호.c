#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int T;
	scanf("%d", &T);
	int* answer = malloc(sizeof(int)*T);
	int j;
	for (j = 0; j < T; j++) {
		char* str = malloc(sizeof(char) * 51);//2~50글자
		int i;
		int l = 0;
		scanf("%s", str);

		for (i = 0; i < strlen(str); i++) {
			if (str[i] == '(') {
				l++;
			}
			else if (str[i] == ')') {
				l--;
			}
			if (l < 0) { break; }
		}
		if (l == 0) { answer[j] = 1; }
		else { answer[j] = 0; }

		free(str);
	}
	for (j = 0; j < T; j++) {
		if (answer[j]) { printf("YES\n"); }
		else { printf("NO\n"); }
	}
	free(answer);
	return 0;
}