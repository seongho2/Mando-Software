#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int evenArray[10];
    int oddArray[10];
    int evenCount = 0;
    int oddCount = 0;

    srand(time(NULL));

    while (evenCount < 10 && oddCount < 10)
    {
        int randomNumber = rand() % 100;

        if (randomNumber % 2 == 0) 
        {
            evenArray[evenCount] = randomNumber;
            evenCount++;
        }
        else 
        {
            oddArray[oddCount] = randomNumber;
            oddCount++;
        }
    }

    printf("짝수 배열: ");
    for (int i = 0; i < evenCount; i++) 
    {
        printf("%d ", evenArray[i]);
    }
    printf("\n");

    printf("홀수 배열: ");
    for (int i = 0; i < oddCount; i++) 
    {
        printf("%d ", oddArray[i]);
    }
    printf("\n");

    printf("짝수 배열 데이터 개수: %d\n", evenCount);
    printf("홀수 배열 데이터 개수: %d\n", oddCount);

    return 0;
}
