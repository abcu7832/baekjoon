int strlen(char* A) {
	int i = 0;
	while (*A != '\0') {
		A++;
		i++;
	}
	return i;
}

int main() {
	int T;//테스트 케이스 개수
	int R[1000] = { 0, };//반복 횟수 1~8
	char P[1000][21];
	char S[21];//20글자를 넘지 않는 문자열
	int i, j, k;
	scanf("%d", &T);//테스트 케이스 개수 입력받기
	
	for (i = 0; i < T; i++) {//테스트 케이스 
		int p = 0;
		scanf("%d", &R[i]);//반복횟수입력받기
		scanf("%s", S);// 문자열 입력받기

		for (j = 0; j<strlen(S); j++) {
			for (k = 0; k < R[i]; k++) {
				p = k + R[i] * j;
				P[i][p] = S[j];
			}
		}			
		R[i] = R[i] * strlen(S);
		for (j = 0; j < R[i]; j++) {
			printf("%c", P[i][j]);
		}
		printf("\n");
	}
	
	/*for (i = 0; i < T; i++) {//테스트 케이스 
		for (j = 0; j < R[i]; j++) {
			printf("%c", P[i][j]);
		}
		printf("\n");
	}*/
	return 0;
}