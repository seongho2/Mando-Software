#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int scores[10][4]; // 학번, 국어, 영어, 수학 점수 저장
    double averages[10]; // 학생별 평균 점수
    double avg; // 전체 학생의 평균 점수

    printf("학번과 국어, 영어, 수학 점수를 차례대로 입력하세요.\n");

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

    // 선택 정렬로 학생 평균 점수 기준 낮은 순서로 정렬
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (averages[i] > averages[j])
            {
                // 평균 점수 교환
                double temp = averages[i];
                averages[i] = averages[j];
                averages[j] = temp;

                // 관련 학생 점수 교환 (학번, 국어, 영어, 수학)
                for (int k = 0; k < 4; k++)
                {
                    int tempScore = scores[i][k];
                    scores[i][k] = scores[j][k];
                    scores[j][k] = tempScore;
                }
            }
        }
    }

    printf("\n학번과 각 학생의 평균 점수:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("학번 %d | 국어 %d | 영어 %d | 수학 %d | 평균 점수: %.2f\n", scores[i][0], scores[i][1], scores[i][2], scores[i][3], averages[i]);
    }
    printf("\n학생 전체 평균: %.2f\n", avg);

    // 과목별 최저 점수 및 학번 출력
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

    printf("\n최저 점수 및 학번:\n");
    printf("국어 | 최저 점수 %d | 학번 %d\n", minKorean, minKoreanID);
    printf("영어 | 최저 점수 %d | 학번 %d\n", minEnglish, minEnglishID);
    printf("수학 | 최저 점수 %d | 학번 %d\n", minMath, minMathID);

    printf("\n평균 점수가 낮은 순서대로 학생 정보:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("학번 %d | 국어 %d | 영어 %d | 수학 %d | 평균 점수: %.2f\n", scores[i][0], scores[i][1], scores[i][2], scores[i][3], averages[i]);
    }

    return 0;
}
