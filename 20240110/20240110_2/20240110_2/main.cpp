#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 10

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

int is_full()
{
    return ((rear + 1) % MAX_SIZE) == front;
}

int is_empty()
{
    return front == -1 && rear == -1;
}

void enqueue(int value)
{
    if (is_full())
    {
        printf("큐가 가득 참\n");
    }
    else
    {
        if (is_empty())
            front = rear = 0;
        else
            rear = (rear + 1) % MAX_SIZE;

        queue[rear] = value;
        printf("들어간 값 : %d\n", value);
    }
}

void dequeue()
{
    if (is_empty())
        printf("큐가 비어있음\n");
    else
    {
        printf("뺀 값 : %d\n", queue[front]);

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX_SIZE;
    }
}

void print_menu()
{
    printf("----------------------------\n");
    printf("1. 큐에 값 추가(Enqueue)\n");
    printf("2. 큐에서 값 제거(Dequeue)\n");
    printf("3. 종료\n");
    printf("----------------------------\n");
}

int main()
{
    int choice, value;

    srand(time(NULL));

    do
    {
        print_menu();
        printf("\n메뉴를 선택하세요: ");
        scanf("%d", &choice);
        printf("\n\n\n");
        switch (choice)
        {
        case 1:
            value = rand() % 99 + 1;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("프로그램을 종료합니다.\n");
            break;
        default:
            printf("잘못된 선택입니다. 다시 시도하세요.\n");
        }
    } while (choice != 3);

    return 0;
}
