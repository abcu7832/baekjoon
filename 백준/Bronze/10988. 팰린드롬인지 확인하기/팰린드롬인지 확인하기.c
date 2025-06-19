#include <stdio.h>
#include<string.h>

int compare(char* A, char* B) {
	int i = 0, sum = 0;
	for (i = 0; i < strlen(A); i++) {
		if (A[i] == B[i]) {
			sum++;
		}
	}
	if (sum == strlen(A)) { return 1; }
	else { return 0; }
}


int main()
{
	char A[101];
	char B[101];
	int i, j, len;
	//입력은 소문자만
	scanf("%s", A);
	len = strlen(A);
	//printf("%d", len);
	//printf("%c%c%c%c", A[0],A[1],A[2],A[3]);
	for (i = 0; i < len; i++) {
		j = len - i - 1;
		B[i] = A[j];
		//printf("A[%d]=%c,B[%d]=%c\n", i, A[i], i, B[i]);
	}
	if (i == len) { B[i] = '\0'; }
	//printf("%s\n", B);


	printf("%d", compare(A,B));


	return 0;
}