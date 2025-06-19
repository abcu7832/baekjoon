#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int N;
	scanf("%d", &N);//N 백만이하
	int* STACK = malloc(sizeof(int) * 1000000);
	int ptr = -1;//stack의 높이
	//1 X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100, 000)
	//2 : 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다.없다면 - 1을 대신 출력한다.
	//3 : 스택에 들어있는 정수의 개수를 출력한다.
	//4 : 스택이 비어있으면 1, 아니면 0을 출력한다.
	//5 : 스택에 정수가 있다면 맨 위의 정수를 출력한다.없다면 - 1을 대신 출력한다.
	while (N) {
		int command;
		scanf("%d", &command);
		switch (command) {
			case 1: ptr++;  scanf("%d", &STACK[ptr]); break;
			case 2: if (ptr != -1) {
				printf("%d", STACK[ptr]);
				ptr--;	
			}
			else {
				printf("-1");
			} break;
			case 3: printf("%d", ptr + 1); break;
			case 4: if (ptr == -1) { 
				printf("1"); 
			}
					else { 
				printf("0"); 
			} break;
			case 5: if (ptr != -1) { 
				printf("%d", STACK[ptr]); 
			}
					else { 
				printf("-1"); 
			} break;
		}
		N--;
		if (command != 1) {
			printf("\n");
		}
	}
	return 0;
}