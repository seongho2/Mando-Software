#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int scores[10][4]; // �й�, ����, ����, ���� ���� ����
    double averages[10]; // �л��� ��� ����
    double avg; // ��ü �л��� ��� ����

    printf("�й��� ����, ����, ���� ������ ���ʴ�� �Է��ϼ���.\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d %d %d %d", &scores[i][0], &scores[i][1], &scores[i][2], &scores[i][3]);

        double sum = 0;
        for (int j = 1; j < 4; j++)
        {
            sum += scores[i][j];
        }
        averages[i] = sum / 3.0;
    }

    double sum1 = 0;
    for (int i = 0; i < 10; i++)
    {
        sum1 += averages[i];
    }
    avg = sum1 / 10;

    // ���� ���ķ� �л� ��� ���� ���� ���� ������ ����
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (averages[i] > averages[j])
            {
                // ��� ���� ��ȯ
                double temp = averages[i];
                averages[i] = averages[j];
                averages[j] = temp;

                // ���� �л� ���� ��ȯ (�й�, ����, ����, ����)
                for (int k = 0; k < 4; k++)
                {
                    int tempScore = scores[i][k];
                    scores[i][k] = scores[j][k];
                    scores[j][k] = tempScore;
                }
            }
        }
    }

    printf("\n�й��� �� �л��� ��� ����:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("�й� %d | ���� %d | ���� %d | ���� %d | ��� ����: %.2f\n", scores[i][0], scores[i][1], scores[i][2], scores[i][3], averages[i]);
    }
    printf("\n�л� ��ü ���: %.2f\n", avg);

    // ���� ���� ���� �� �й� ���
    int minKorean = scores[0][1], minKoreanID = scores[0][0];
    int minEnglish = scores[0][2], minEnglishID = scores[0][0];
    int minMath = scores[0][3], minMathID = scores[0][0];

    for (int i = 1; i < 10; i++)
    {
        if (scores[i][1] < minKorean) {
            minKorean = scores[i][1];
            minKoreanID = scores[i][0];
        }
        if (scores[i][2] < minEnglish) {
            minEnglish = scores[i][2];
            minEnglishID = scores[i][0];
        }
        if (scores[i][3] < minMath) {
            minMath = scores[i][3];
            minMathID = scores[i][0];
        }
    }

    printf("\n���� ���� �� �й�:\n");
    printf("���� | ���� ���� %d | �й� %d\n", minKorean, minKoreanID);
    printf("���� | ���� ���� %d | �й� %d\n", minEnglish, minEnglishID);
    printf("���� | ���� ���� %d | �й� %d\n", minMath, minMathID);

    printf("\n��� ������ ���� ������� �л� ����:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("�й� %d | ���� %d | ���� %d | ���� %d | ��� ����: %.2f\n", scores[i][0], scores[i][1], scores[i][2], scores[i][3], averages[i]);
    }

    return 0;
}
