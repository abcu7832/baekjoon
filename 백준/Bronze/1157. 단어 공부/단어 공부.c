#include <stdio.h>
#include<string.h>

char count(char* A) {
	char B[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int sum[26] = { 0, };//
	int i = 0, j;
	int len = 0;
	int p = 0;//수가 겹치는 경우
	len = strlen(A);

	for (j = 0; j < len; j++) {
		for (i = 0; i < 26; i++) {//알파벳 뭐가 있는지 판별
			if ((B[i] == A[j]) || (B[i] + ('a' - 'A') == A[j])) {
				sum[i]++;
			}
		}
	}
	int MAX = 0, MAX_i;
	for (i = 0; i < 26; i++) {//알파벳 뭐가 있는지 판별
		if (MAX<sum[i]) {
			MAX = sum[i];
			MAX_i = i;
			p++;
		}
		else if ((MAX == sum[i])&&(p!=0)) {
			p = 0;
			MAX_i = -2;
		}
	}
	return 'A' + MAX_i;//리턴값 대문자
}


int main()
{
	char A[1000000];
	//입력
	scanf("%s", A);

	printf("%c", count(A));


	return 0;
}