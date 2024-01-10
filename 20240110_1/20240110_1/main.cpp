#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = 0;
int rear = -1;

int is_full()
{
    return rear >= MAX_SIZE - 1;
}

int is_empty() 
{
    return front > rear;
}

void enqueue(int value) 
{
    if (is_full()) 
    {
        printf("ť�� ���� ��\n");
        return;
    }
    else 
    {
        queue[++rear] = value;
        printf("�� �� : %d\n", value);
    }
}

void dequeue() 
{
    if (is_empty())
        printf("ť�� �������\n");
    else
        printf("�� �� : %d\n", queue[front++]);
}

int main()
{
    int a;

    srand(time(NULL));

    for (int i = 0; i < 11; i++) 
    {
        a = rand() % 99 + 1;
        enqueue(a);
    }

    printf("\n");

    for (int i = 0; i < 11; i++)
        dequeue();

    return 0;
}
