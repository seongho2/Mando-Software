#include "calculator.h"

int main() 
{
    char cont;
    double x, y;
    double sum=0;
    char oper;
    
        cout << "X�� ���� �Է�: ";
        cin >> x;

        for (;;)
        {
            
        cout << "�����ڸ� �Է�: ";
        cin >>oper;

        if (oper == 'q')
        {
            cout << "����";
            break;
            return 0;
        }
        if (oper == 'c')
        {
            cout << "�ʱ�ȭ";
            sum = 0;     
            break;
        }

        cout << "Y�� ���� �Է�: ";
        cin >> y;


        Calculator calc(x, oper, y, sum);
        calc.calculate();
        calc.print();
        sum = calc.GetSum();
        x = sum;

        }
        

}