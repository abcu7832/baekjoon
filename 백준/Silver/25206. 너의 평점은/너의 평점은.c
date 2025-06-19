#include <stdio.h>

int main() {
	char c[20][51];//과목명 담는 변수
	char grade[20][2];//받은 등급 담는 변수
	double prc_point[20] = { 0, };
	double prc[20] = { 0, };//해당 과목의 학점 단위수 담는 변수
	int i, sum = 0;
	double final_point = 0;


	for (i = 0; i < 20; i++) {
		scanf("%s", c[i]);//과목 입력
		scanf("%lf", &prc[i]);
		scanf("%s", grade[i]);
		//printf("%f %s\n", prc[i], grade[i]);

		if (grade[i][0] == 'A') {
			prc_point[i] = 4.0;
			if (grade[i][1] == '+') { prc_point[i] += 0.5; }
		}
		else if (grade[i][0] == 'B') {
			prc_point[i] = 3.0;
			if (grade[i][1] == '+') { prc_point[i] += 0.5; }
		}
		else if (grade[i][0] == 'C') {
			prc_point[i] = 2.0;
			if (grade[i][1] == '+') { prc_point[i] += 0.5; }
		}
		else if (grade[i][0] == 'D') {
			prc_point[i] = 1.0;
			if (grade[i][1] == '+') { prc_point[i] += 0.5; }
		}
		else { prc_point[i] = 0; if (grade[i][0] == 'P') { prc[i] = 0; } }
		final_point += prc_point[i] * prc[i];
		//printf("%f", final_point);
		sum += prc[i];
	}
	final_point = final_point / sum;

	printf("%f", final_point);
	return 0;
}