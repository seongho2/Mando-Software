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

    printf("¦�� �迭: ");
    for (int i = 0; i < evenCount; i++) 
    {
        printf("%d ", evenArray[i]);
    }
    printf("\n");

    printf("Ȧ�� �迭: ");
    for (int i = 0; i < oddCount; i++) 
    {
        printf("%d ", oddArray[i]);
    }
    printf("\n");

    printf("¦�� �迭 ������ ����: %d\n", evenCount);
    printf("Ȧ�� �迭 ������ ����: %d\n", oddCount);

    return 0;
}
