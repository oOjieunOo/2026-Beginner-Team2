#include <stdio.h>

typedef unsigned long long ull;

int main()
{
    ull n;

    scanf("%llu", &n);

    ull left = 1;
    ull right = n;
    ull answer = 1;

    while (left <= right)
    {
        // 현재 범위의 가운데 값
        ull mid = (left + right) / 2;

        /*
            mid * mid <= n인지 확인

            큰 숫자에서는 mid * mid가
            너무 커질 수 있기 때문에

            mid <= n / mid

            로 비교한다.
        */
        if (mid <= n / mid)
        {
            // mid는 정답 후보
            answer = mid;

            // 더 큰 값도 가능한지 확인
            left = mid + 1;
        }
        else
        {
            // mid가 너무 크다.
            // 오른쪽 범위를 버린다.
            right = mid - 1;
        }
    }

    printf("%llu", answer);

    return 0;
}