#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

int menu(void)
{
    printf("메뉴를 선택해주세요\n\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n\n");
    printf("1. 더하기(+)\n");
    printf("2. 빼기(-)\n");
    printf("3. 곱하기(*)\n");
    printf("4. 나누기(/)\n");
    printf("5. 루트(√)\n");
    printf("6. 팩토리얼(!)\n");
    printf("7. 사인(sin)\n");
    printf("8. 종료\n\n");
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n\n");
    int menu;

    scanf("%d", &menu);

    return menu;
}

void add()
{
    int num1 = 0;
    int num2 = 0;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);

    printf("두 정수의 합은 %d입니다.\n\n", num1 + num2);
}

void sub()
{
    int num1 = 0;
    int num2 = 0;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);
    printf("두 정수의 차는 %d입니다.\n\n", num1 - num2);
}

void mul()
{
    int num1 = 0;
    int num2 = 0;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);
    printf("두 정수의 곱은 %d입니다.\n", num1 * num2);
}

void div()
{
    int num1 = 0;
    int num2 = 0;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);
    printf("두 정수의 몫은 %d입니다.\n\n", num1 / num2);
}

void root()
{
    double num1 = 0;

    printf("정수를 입력하시오: ");
    scanf("%lf", &num1);
    printf("입력하신 정수의 제곱근은 %.2lf 입니다.\n\n", sqrt(num1));
}

void factorial()
{
    int num1 = 0;
    int n = 1;
    printf("정수를 입력하시오: ");
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++)
    {
        n *= i;
    }
    printf("입력하신 정수의 팩토리얼 값은 %d 입니다.\n\n", n);
}

void sine()
{
    double num1 = 0;
    double n = 0;
    printf("각도를 입력하시오: ");
    scanf("%lf", &num1);
    n = num1 * (PI / 180);

    printf("입력하신 각도의 sin 값은 %.2lf 입니다.\n\n", sin(n));
}

int main()
{
    while (1)
    {
        if (menu() == 8)
        {
            printf("이용해주셔서 감사합니다^&^\n\n");
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