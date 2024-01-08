#include <stdio.h>

int partition(int* arr, int left, int right)
{
    int pivot_index = left;
    int pivot = arr[pivot_index];

    int i = left + 1;
    int j = right;

    while (i <= j)
    {
        while (i <= right && arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    arr[left] = arr[j];
    arr[j] = pivot;

    return j;
}

void quick_sort(int* arr, int left, int right)
{
    if (left < right)
    {
        int p = partition(arr, left, right);
        quick_sort(arr, left, p - 1);
        quick_sort(arr, p + 1, right);
    }
}

int main()
{
    int arr[10] = { 10, 30, 22, 50, 20, 90, 83, 2, 6, 66 };

    quick_sort(arr, 0, 9);
    printf("Á¤·Ä ÈÄ: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}