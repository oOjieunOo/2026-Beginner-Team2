#include <stdio.h>

int main()
{
    char color[5];
    int number[5];
    int count[10] = { 0 };

    int i, j;

    // 카드 5장 입력
    for (i = 0; i < 5; i++)
    {
        scanf(" %c %d", &color[i], &number[i]);

        count[number[i]]++;
    }

    // 같은 색인지 확인
    int sameColor = 1;

    for (i = 1; i < 5; i++)
    {
        if (color[i] != color[0])
        {
            sameColor = 0;
        }
    }

    // 숫자를 오름차순으로 정렬
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (number[i] > number[j])
            {
                int temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    // 연속된 숫자인지 확인
    int straight = 1;

    for (i = 1; i < 5; i++)
    {
        if (number[i] != number[i - 1] + 1)
        {
            straight = 0;
        }
    }

    int max = number[4];

    // 1. 같은 색 + 연속
    if (sameColor && straight)
    {
        printf("%d", 900 + max);
    }

    // 2. 숫자 4개가 같음
    else
    {
        int four = 0;

        for (i = 1; i <= 9; i++)
        {
            if (count[i] == 4)
            {
                four = i;
            }
        }

        if (four != 0)
        {
            printf("%d", 800 + four);
        }

        // 3. 숫자 3개 + 숫자 2개
        else
        {
            int three = 0;
            int two = 0;

            for (i = 1; i <= 9; i++)
            {
                if (count[i] == 3)
                    three = i;

                if (count[i] == 2)
                    two = i;
            }

            if (three != 0 && two != 0)
            {
                printf("%d", 700 + three * 10 + two);
            }

            // 4. 같은 색
            else if (sameColor)
            {
                printf("%d", 600 + max);
            }

            // 5. 연속
            else if (straight)
            {
                printf("%d", 500 + max);
            }

            // 6. 숫자 3개가 같음
            else if (three != 0)
            {
                printf("%d", 400 + three);
            }

            // 7. 숫자 2개씩 두 쌍
            else
            {
                int pair[2];
                int pairCount = 0;

                for (i = 1; i <= 9; i++)
                {
                    if (count[i] == 2)
                    {
                        pair[pairCount] = i;
                        pairCount++;
                    }
                }

                if (pairCount == 2)
                {
                    printf("%d", 300 + pair[1] * 10 + pair[0]);
                }

                // 8. 숫자 2개가 같음
                else if (pairCount == 1)
                {
                    printf("%d", 200 + pair[0]);
                }

                // 9. 아무 조건도 없음
                else
                {
                    printf("%d", 100 + max);
                }
            }
        }
    }

    return 0;
}