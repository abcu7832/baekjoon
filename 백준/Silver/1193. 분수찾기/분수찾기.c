#include <stdio.h>

int main() {
	int X;
	int i, j, d;
	
	int num = 1;
	int a;
	scanf("%d", &X);//단어의 개수 입력받기
	a = -1;
	while (num <= X) {
		num += (++a);
	}
	//printf("a = %d\n", a);//num-1이 그 줄에서 가장 높은 숫자
	//a값이 줄 순서 
	//a + 1 = j / i
	
	d = (a % 2) ? 1 : 0;//방향완성
	//d = 1; 숫자증가할때 j감소 i 증가
	
	//printf("d = %d\n", d);
	
	if (d == 1) {
		i = a + 1 - num + X;
		j = a + 1 - i;
	}
	else {
		j = a + 1 - num + X;
		i = a + 1 - j;
	}
	printf("%d/%d\n", j, i);
	return 0;
}