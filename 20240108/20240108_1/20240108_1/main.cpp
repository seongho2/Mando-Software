#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binarysearch(int data[], int n, int key);

int main(int argc, char* argv[])
{
    int A[18] = { 4, 9, 11, 24, 29, 30, 37, 38, 39, 49, 50, 54, 57, 63, 71, 76, 81, 87};
    int index;
    int key;

    printf("key�� �Է����ּ���: ");
    scanf("%d", &key);
    index = binarysearch(A, 18, key);
    if (index == -1) 
    {
        printf("�ڷᰡ �����ϴ�.\n");
    }
    else 
    {
        printf("%d��°�� �ֽ��ϴ�.\n", index + 1);
    }
    return 0;
}
int binarysearch(int data[], int n, int key) {
    int low, high;
    int mid;

    low = 0;
    high = n - 1;
    while (low <= high) 
    {
        mid = (low + high) / 2;
        if (key == data[mid])
        {           
            return mid;
        }
        else if (key < data[mid]) 
        {      
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;                     
}

