#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

int menu(void)
{
    printf("�޴��� �������ּ���\n\n");
    printf("�ѤѤѤѤѤѤѤѤѤ�\n\n");
    printf("1. ���ϱ�(+)\n");
    printf("2. ����(-)\n");
    printf("3. ���ϱ�(*)\n");
    printf("4. ������(/)\n");
    printf("5. ��Ʈ(��)\n");
    printf("6. ���丮��(!)\n");
    printf("7. ����(sin)\n");
    printf("8. ����\n\n");
    printf("�ѤѤѤѤѤѤѤѤѤ�\n\n");
    int menu;

    scanf("%d", &menu);

    return menu;
}

void add()
{
    int num1 = 0;
    int num2 = 0;

    printf("�� ���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &num1, &num2);

    printf("�� ������ ���� %d�Դϴ�.\n\n", num1 + num2);
}

void sub()
{
    int num1 = 0;
    int num2 = 0;

    printf("�� ���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &num1, &num2);
    printf("�� ������ ���� %d�Դϴ�.\n\n", num1 - num2);
}

void mul()
{
    int num1 = 0;
    int num2 = 0;

    printf("�� ���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &num1, &num2);
    printf("�� ������ ���� %d�Դϴ�.\n", num1 * num2);
}

void div()
{
    int num1 = 0;
    int num2 = 0;

    printf("�� ���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &num1, &num2);
    printf("�� ������ ���� %d�Դϴ�.\n\n", num1 / num2);
}

void root()
{
    double num1 = 0;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%lf", &num1);
    printf("�Է��Ͻ� ������ �������� %.2lf �Դϴ�.\n\n", sqrt(num1));
}

void factorial()
{
    int num1 = 0;
    int n = 1;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++)
    {
        n *= i;
    }
    printf("�Է��Ͻ� ������ ���丮�� ���� %d �Դϴ�.\n\n", n);
}

void sine()
{
    double num1 = 0;
    double n = 0;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%lf", &num1);
    n = num1 * (PI / 180);

    printf("�Է��Ͻ� ������ sin ���� %.2lf �Դϴ�.\n\n", sin(n));
}

int main()
{
    while (1)
    {
        if (menu() == 8)
        {
            printf("�̿����ּż� �����մϴ�^&^\n\n");
            break;
        }

        switch (menu())
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        case 5:
            root();
            break;
        case 6:
            factorial();
            break;
        case 7:
            sine();
            break;
        }
    }

    return 0;
}