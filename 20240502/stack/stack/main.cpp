#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char a[5] = { 0, }; // �迭
    int num;            // push, pop, top ���� �ִ� ����
    int i = 0;          // �迭 �� ����
    char c;             // �Է� �޴� ���ڿ�

    for (;;)
    {
        printf("push: 0, pop: 1�� �Է����ּ���: ");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("push�� ���ڸ� �Է����ּ���\n");
            printf("a[%d]: ", i);
            scanf(" %c", &c);
            a[i] = c;   // �Է¹��� ���ڸ� �迭�� ����
            i++;
            printf("top: %d\n", i);
            printf("\n\n\n");
        }
        else if (num == 1)
        {
            if (i > 0)
            {
                printf("a[%d]�� pop �Ǿ����ϴ�.\n", i - 1);
                printf("pop�� ���ڴ� %c�Դϴ�.\n", a[i - 1]);
                i--;
                printf("top: %d\n", i);
                printf("\n\n\n");
            }
            else
            {
                printf("pop�� ���ڰ� �����ϴ�.\n");
            }
        }
        else
        {
            printf("�߸��� �Է��Դϴ�. ���α׷��� ����\n");
            break;
        }
    }
    return 0;
}
