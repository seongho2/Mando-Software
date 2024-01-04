#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    int size = 10;

    int num[10];

    for (int i = 0; i < size; i++)
    {
        num[i] = rand() % 100 + 1;
    }
    printf("배열 초기 상태: ");
        printf("%d ", num[0]);
    
    printf("\n");

    for (int i = 1; i < size; i++) {
        int key = num[i];
        int j = i - 1;

        printf("정렬 중인 원소 %d -> ", key);
        for (int k = 0; k <= j; k++) {
            printf("%d ", num[k]);
        }
        printf("\n");

        while (j >= 0 && num[j] > key) {
            num[j + 1] = num[j];
            j = j - 1;
        }

        num[j + 1] = key;
    }

    printf("배열 정렬 후: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
