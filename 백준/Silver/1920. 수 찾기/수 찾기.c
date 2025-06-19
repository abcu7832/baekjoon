#include <stdio.h>
#include <stdlib.h>

// 비교 함수: qsort에 사용 (오름차순 정렬)
int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;

    if (x < y) return -1;
    else if (x > y) return 1;
    else return 0;
}

// 이진 탐색 함수: target이 배열 arr에 있는지 여부를 반환 (있으면 1, 없으면 0)
int binary_search(int *arr, int size, int target) {
	int left = 0, right = size - 1;

	// 이진 탐색 반복
	while (left <= right) {
		int mid = (left + right) / 2;

		if (arr[mid] == target) return 1;  // 찾았으면 1 반환
		else if (arr[mid] < target) left = mid + 1;  // 오른쪽 범위로 이동
		else right = mid - 1;                       // 왼쪽 범위로 이동
	}

	return 0;  // 못 찾았으면 0 반환
}

int main() {
	int N, M, i;
	scanf("%d", &N);

	// N개의 숫자 입력 받을 배열 할당
	int *num = malloc(sizeof(int) * N);
	for (i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}

	// 오름차순 정렬을 위한 qsort
	qsort(num, N, sizeof(int), compare);

	// M개의 찾고자 하는 숫자 입력
	scanf("%d", &M);
	int *numnum = malloc(sizeof(int) * M);
	for (i = 0; i < M; i++) {
		scanf("%d", &numnum[i]);
	}

	// 각 숫자에 대해 num 배열에서 존재 여부 이진 탐색 후 출력
	for (i = 0; i < M; i++) {
		printf("%d\n", binary_search(num, N, numnum[i]));
	}

	// 동적 할당한 메모리 해제
	free(num);
	free(numnum);
	return 0;
}