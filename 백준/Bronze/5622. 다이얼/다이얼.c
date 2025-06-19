#include <stdio.h>
#include<string.h>

int dial(char* d) {//걸린 초 출력
	int sum = 0, i;
	//ABC 2초
	//DEF 3초
	//GHI 4초
	//JKL 5초
	//MNO 6초
	//PQRS 7초
	//TUV 8초
	//WXYZ 9초
	for (i = 0; i < strlen(d); i++) {
		if ((d[i] == 'A') || (d[i] == 'B') || (d[i] == 'C')) { sum += 2; }
		else if ((d[i] == 'D') || (d[i] == 'E') || (d[i] == 'F')) { sum += 3; }
		else if ((d[i] == 'G') || (d[i] == 'H') || (d[i] == 'I')) { sum += 4; }
		else if ((d[i] == 'J') || (d[i] == 'K') || (d[i] == 'L')) { sum += 5; }
		else if ((d[i] == 'M') || (d[i] == 'N') || (d[i] == 'O')) { sum += 6; }
		else if ((d[i] == 'P') || (d[i] == 'Q') || (d[i] == 'R') || (d[i] == 'S')) { sum += 7; }
		else if ((d[i] == 'T') || (d[i] == 'U') || (d[i] == 'V')) { sum += 8; }
		else if ((d[i] == 'W') || (d[i] == 'X') || (d[i] == 'Y') || (d[i] == 'Z')) { sum += 9; }
	}
	return sum + strlen(d);
}
int main()
{
	char str[16];//단어의 길이 2~15
	scanf("%s", str);
	printf("%d", dial(str));
	return 0;
}