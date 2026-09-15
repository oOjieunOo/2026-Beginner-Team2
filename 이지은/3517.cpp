#include <stdio.h>

int arr[500005];

/* 이진 탐색 함수 */
int binarySearch(int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        // 현재 탐색 범위의 가운데
        int mid = (left + right) / 2;

        if (arr[mid] == target)
        {
            // 값을 찾았으므로 위치를 반환
            return mid;
        }
        else if (arr[mid] < target)
        {
            /*
                가운데 값보다 target이 크다.

                따라서 왼쪽에 있는 값들은
                볼 필요가 없다.

                → 왼쪽 범위를 버림
            */
            left = mid + 1;
        }
        else
        {
            /*
                가운데 값보다 target이 작다.

                따라서 오른쪽에 있는 값들은
                볼 필요가 없다.

                → 오른쪽 범위를 버림
            */
            right = mid - 1;
        }
    }

    // 끝까지 찾지 못한 경우
    return -1;
}

int main()
{
    int n;
    int q;
    int i;
    int target;

    // 배열의 크기
    scanf("%d", &n);

    // 정렬된 배열 입력
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // 찾을 숫자의 개수
    scanf("%d", &q);

    for (i = 0; i < q; i++)
    {
        scanf("%d", &target);

        printf("%d ", binarySearch(n, target));
    }

    return 0;
}