#include <stdio.h>

int main() {
	int N;//단어의 개수
	int i, j, k;
	char word[100][101];//최대 단어의 개수 100, 단어의 길이 100자까지
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int cnt = 0;//그룹단어의 개수 세기
	
	scanf("%d", &N);//단어의 개수 입력받기
	
	for (i = 0; i < N; i++) {
		int key1[26] = { 0, };
		int key2[26] = { 0, };
		int group = 1;
		scanf("%s", word[i]);//단어 입력받기
		//printf("word: %s  \n", word[i]);
		int length = strlen(word[i]);
		for (j = 0; j < length; j++) {
			//printf("j: %d\n", j);
			if (j < length - 1) {
				for (k = 0; k < 26; k++) {
					if (word[i][j] == alphabet[k]) {//알파벳 한번 등장
						key1[k] = 1;
						//printf("key1[%d]: %d   \n", k, key1[k]);
						if (key2[k] == 1) {//한번 등장하고 나중에 한번더 등장하는 경우
							group = 0;
							break;//그룹단어가 아닌 경우 발견시 for문 종료
						}
						if (key1[k] == 1) {
							if (word[i][j] != word[i][j + 1]) {
								key2[k] = 1;//등장하다가 안하는 경우
								//printf("key2[%d]: %d   \n", k, key2[k]);
							}
							break;
						}
					}
				}
			}
			else {
				for (k = 0; k < 26; k++) {
					if (word[i][j] == alphabet[k]) {//알파벳 등장
						key1[k] = 1;
						//printf("key1[%d]: %d   \n", k, key1[k]);
						if (key2[k] == 1) {//한번 등장하고 나중에 한번더 등장하는 경우
							group = 0;
							break;//그룹단어가 아닌 경우 발견시 for문 종료
						}
						break;
					}
				}
			}
			if (group == 0) { cnt++; break; }
		}
		//printf("\ncnt == %d\n\n", cnt);
	}
	printf("%d", N - cnt);

	return 0;
}