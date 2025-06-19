int main()
{
	int N;// 10,000,000이하
	scanf("%d", &N);
	int num;//10,000보다 작거나 같은 자연수
	int *arr = malloc(sizeof(int) * 10000);

	int k = N;
	int i, j = 0;
	for (i = 0; i < 10000; i++)
	{
		arr[i] = 0;
	}
	
	while(k){
		k--;//N
		scanf("%d", &num);
		arr[num]++;
	}

	for (i = 0; i <= 10000; i++){
		for (k = 0; k < arr[i]; k++) {//=>N번반복
			printf("%d", i);
			j++;
			if (j == N) {
				break;
			}
			else {
				printf("\n");
			}
		}
	}

	free(arr);
	return 0;
}
