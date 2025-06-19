#include <stdio.h>

int main() {
	int N;
	int layer = 0;//N이 위치한 겹==지나가야하는 방개수
	int X_layer;//겹에 위치한 방개수
	int sum = 0;
	
	scanf("%d", &N);//숫자 입력받기

	//printf("\n\n");
	while (N > sum) {
		layer++;
		if (layer == 1) {
			X_layer = 0;
			sum ++;
		}
		else if (layer >= 2) {
			X_layer = 6 * (layer - 1);
			sum += X_layer;
		}
		//printf("%d  %d\n", layer, X_layer);
	}
	printf("%d", layer);
	
	return 0;
}