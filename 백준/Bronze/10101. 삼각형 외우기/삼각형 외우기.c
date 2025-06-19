#include <stdio.h>

int main() {
	//세 각의 크기가 모두 60이면, Equilateral
	//세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
	//세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
	//세 각의 합이 180이 아닌 경우에는 Error
	int A0, A1, A2;

	scanf("%d %d %d", &A0, &A1, &A2);

	if (A0 + A1 + A2 != 180) { printf("Error"); }
	else {
		if ((A0 == 60) && (A1 == 60)) { printf("Equilateral"); }
		else if ((A0 != A1) && (A0 != A2) && (A1 != A2)) { printf("Scalene"); }
		else { printf("Isosceles"); }
	}
	return 0;
}