#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char a[5] = { 0, }; // 배열
    int num;            // push, pop, top 고를수 있는 변수
    int i = 0;          // 배열 속 순서
    char c;             // 입력 받는 문자열

    for (;;)
    {
        printf("push: 0, pop: 1을 입력해주세요: ");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("push할 문자를 입력해주세요\n");
            printf("a[%d]: ", i);
            scanf(" %c", &c);
            a[i] = c;   // 입력받은 문자를 배열에 저장
            i++;
            printf("top: %d\n", i);
            printf("\n\n\n");
        }
        else if (num == 1)
        {
            if (i > 0)
            {
                printf("a[%d]가 pop 되었습니다.\n", i - 1);
                printf("pop할 문자는 %c입니다.\n", a[i - 1]);
                i--;
                printf("top: %d\n", i);
                printf("\n\n\n");
            }
            else
            {
                printf("pop할 문자가 없습니다.\n");
            }
        }
        else
        {
            printf("잘못된 입력입니다. 프로그램을 종료\n");
            break;
        }
    }
    return 0;
}
