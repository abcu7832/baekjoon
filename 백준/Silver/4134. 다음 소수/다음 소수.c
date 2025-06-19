#include <stdio.h>
#include <math.h>

// 소수 판별 함수
int is_prime(long long x) {
    if (x <= 1) return 0; // 1 이하의 수는 소수가 아님
    if (x == 2) return 1; // 2는 유일한 짝수 소수
    if (x % 2 == 0) return 0; // 2를 제외한 모든 짝수는 소수가 아님

    // 3부터 √x까지 홀수로 나눠보기
    for (long long i = 3; i <= sqrt(x); i += 2) {
        if (x % i == 0) return 0; // 나눠 떨어지면 소수가 아님
    }
    return 1; // 소수일 경우
}

int main(void) {
    int t; // 테스트 케이스 수
    scanf("%d", &t);

    while (t--) {
        long long x;
        scanf("%lld", &x);

        // n보다 크거나 같은 첫 번째 소수를 찾음
        while (!is_prime(x)) {
            x++;
        }

        printf("%lld\n", x);
    }
    
    return 0;
}