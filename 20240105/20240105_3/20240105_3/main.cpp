#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUDENT 20
#define CATEGORY 5

void Scores(double score[STUDENT][CATEGORY + 2])
{
    printf("번호\t중간\t기말\t과제\t출석\t성적\t등수\n");
    printf("============================================================\n");
    for (int i = 0; i < STUDENT; i++)
    {
        printf("%2d\t%.0lf\t%.0lf\t%.0lf\t%.0lf\t%.2lf\t%d\n", i + 1, score[i][0], score[i][1], score[i][2], score[i][3], score[i][5], (int)score[i][6]);
    }
}

void Total_Scores(double score[STUDENT][CATEGORY + 2], double total_score[STUDENT])
{
    for (int i = 0; i < STUDENT; i++)
    {
        total_score[i] = (score[i][0] * 0.3) + (score[i][1] * 0.4) + (score[i][2] * 0.2) + (score[i][3] * 0.1) - (score[i][4] * 1);
        score[i][5] = total_score[i];
    }
}

void Ranks(double score[STUDENT][CATEGORY + 2])
{
    for (int i = 0; i < STUDENT; i++)
    {
        int rank = 1;
        for (int j = 0; j < STUDENT; j++)
        {
            if (score[i][5] < score[j][5])
            {
                rank++;
            }
        }
        score[i][6] = rank;
    }
}

int main()
{
    srand(time(NULL));

    double score[STUDENT][CATEGORY + 2] = { 0 };
    double total_score[STUDENT] = { 0 };

    for (int i = 0; i < STUDENT; i++)
    {
        for (int j = 0; j < CATEGORY; j++)
        {
            score[i][j] = rand() % 100 + 1;
        }
        score[i][4] = rand() % 10 + 1;
    }

    Total_Scores(score, total_score);
    Ranks(score);
    Scores(score);

    return 0;
}