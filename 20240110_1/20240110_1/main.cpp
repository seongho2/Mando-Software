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
        printf("큐가 가득 참\n");
        return;
    }
    else 
    {
        queue[++rear] = value;
        printf("들어간 값 : %d\n", value);
    }
}

void dequeue() 
{
    if (is_empty())
        printf("큐가 비어있음\n");
    else
        printf("뺀 값 : %d\n", queue[front++]);
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
