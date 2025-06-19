#include <stdio.h>

int main() {
	int N, i;
	int CASE;
	scanf("%d", &N);//테스트케이스 개수 입력받기

	for(i = 0; i < N; i++) {
		int j[4] = { 0, };
		scanf("%d", &CASE);
		while (CASE > 0) {
			//printf("%d\n", CASE);
			if (CASE >= 25) {
				for (;;) {
					if (CASE >= 25) {
						CASE -= 25;
						j[0]++;
					}
					else { break; }
				}
			}
			else if (CASE >= 10) {
				for (;;) {
					if (CASE >= 10) {
						CASE -= 10;
						j[1]++;
					}
					else { break; }
				}
			}
			else if (CASE >= 5) {
				for (;;) {
					if (CASE >= 5) {
						CASE -= 5;
						j[2]++;
					}
					else { break; }
				}
			}
			else if (CASE >= 1) {
				for (;;) {
					if (CASE >= 1) {
						CASE -= 1;
						j[3]++;
					}
					else { break; }
				}
			}
		}
		printf("%d %d %d %d\n", j[0], j[1], j[2], j[3]);
	}

	return 0;
}