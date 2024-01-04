#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUDENT 20
#define CATEGORY 5

int main()
{
    srand(time(NULL));
    double score[STUDENT][CATEGORY] = { 0 };
    double total_score[STUDENT] = { 0 };
    double max = -100;
    double min = 100;

    for (int i = 0; i < STUDENT; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            score[i][j] = rand() % 100 + 1;
        }

        score[i][4] = rand() % 10 + 1;

        printf("%2d �� �л��� �߰� ����: %.0lf\n", i + 1, score[i][0]);
        printf("             �⸻ ����: %.0lf\n", score[i][1]);
        printf("             �⸻ ����: %.0lf\n", score[i][2]);
        printf("             ��ǥ ����: %.0lf\n", score[i][3]);
        printf("             �Ἦ ����: %.0lf\n\n", score[i][4]);
    }
    printf("\n");

    for (int i = 0; i < STUDENT; i++)
    {
        total_score[i] = (score[i][0] * 0.3) + (score[i][1] * 0.4) + (score[i][2] * 0.2) + (score[i][3] * 0.1) - (score[i][4] * 1);
        printf("%2d �� �л��� �� ����: %.2lf\n", i + 1, total_score[i]);
    }
    printf("\n");

    for (int i = 0; i < STUDENT; i++)
    {
        if (max < total_score[i])
        {
            max = total_score[i];
        }

        if (min > total_score[i])
        {
            min = total_score[i];
        }
    }

    printf("�������� 1  ��: %.2lf\n", max);
    printf("�������� 20 ��: %.2lf\n\n", min);

    return 0;
}