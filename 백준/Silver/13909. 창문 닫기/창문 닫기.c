int main()
{ 
	unsigned int N;// 21억 이하(int는 32bit)   N개의 창문  N명의 사람 
	scanf("%d", &N);
	
	int n = 0;//열려있는 창문의 개수
	int w;
	int s = 0;
	while (N >= s) {
		//printf("n = %d, s = %d\n", n, s);
		w = 2 * n + 1;
		s += w;
		n++;
	}
	n--;
	printf("%d", n);
	return 0;
}