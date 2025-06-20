#include <stdio.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일

int main()
{
	char s1[1000000];  // 크기가 30인 char형 배열을 선언하고 문자열 할당
	gets(s1);
	char *ptr = strtok(s1, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환
	int i = 0;
	while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
	{
		i++;        // 자른 문자열 출력
		ptr = strtok(NULL, " ");      // 다음 문자열을 잘라서 포인터를 반환
	}
	printf("%d", i);
	return 0;
}