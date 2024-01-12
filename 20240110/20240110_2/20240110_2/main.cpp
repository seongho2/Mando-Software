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
        printf("ť�� ���� ��\n");
    }
    else
    {
        if (is_empty())
            front = rear = 0;
        else
            rear = (rear + 1) % MAX_SIZE;

        queue[rear] = value;
        printf("�� �� : %d\n", value);
    }
}

void dequeue()
{
    if (is_empty())
        printf("ť�� �������\n");
    else
    {
        printf("�� �� : %d\n", queue[front]);

        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX_SIZE;
    }
}

void print_menu()
{
    printf("----------------------------\n");
    printf("1. ť�� �� �߰�(Enqueue)\n");
    printf("2. ť���� �� ����(Dequeue)\n");
    printf("3. ����\n");
    printf("----------------------------\n");
}

int main()
{
    int choice, value;

    srand(time(NULL));

    do
    {
        print_menu();
        printf("\n�޴��� �����ϼ���: ");
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
            printf("���α׷��� �����մϴ�.\n");
            break;
        default:
            printf("�߸��� �����Դϴ�. �ٽ� �õ��ϼ���.\n");
        }
    } while (choice != 3);

    return 0;
}
