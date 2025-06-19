int num[500000];
int tmp[500000];
int cnt = 0;
int Num;
int N, K;
void merge(int A[], int p, int q, int r) {
	int i = p, j = q + 1, t = 0;
	while (i <= q && j <= r) {
		if (A[i] <= A[j]) {
			cnt++;
			if (K == cnt) {
				Num = A[i];
			}
			tmp[t++] = A[i++];
		}
		else {
			cnt++;
			if (K == cnt) {
				Num = A[j];
			}
			tmp[t++] = A[j++];
		}
	}
	
	while (i <= q) { 
		cnt++;
		if (K == cnt) {
			Num = A[i];
		}
		tmp[t++] = A[i++]; 
	}
	while (j <= r) { 
		cnt++;
		if (K == cnt) {
			Num = A[j];
		}
		tmp[t++] = A[j++]; 
	}

	// tmp 배열을 다시 A[p..r]에 복사
	for (i = p, t = 0; i <= r; i++, t++)
	{
		A[i] = tmp[t];
	}
}

// 분할 정복: A[p..r]을 오름차순 정렬
void merge_sort(int A[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		merge_sort(A, p, q);       // 전반부 정렬
		merge_sort(A, q + 1, r);   // 후반부 정렬
		merge(A, p, q, r);         // 병합
	}
}

int main() {
	scanf("%d %d", &N, &K);
	int i;
	for (i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	merge_sort(num, 0, N - 1);
	if (cnt < K) { Num = -1;}
	printf("%d", Num);
	return 0;
}