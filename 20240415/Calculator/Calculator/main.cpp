#include "calculator.h"

int main() 
{
    char cont;
    double x, y;
    double sum=0;
    char oper;
    
        cout << "X의 값을 입력: ";
        cin >> x;

        for (;;)
        {
            
        cout << "연산자를 입력: ";
        cin >>oper;

        if (oper == 'q')
        {
            cout << "종료";
            break;
            return 0;
        }
        if (oper == 'c')
        {
            cout << "초기화";
            sum = 0;     
            break;
        }

        cout << "Y의 값을 입력: ";
        cin >> y;


        Calculator calc(x, oper, y, sum);
        calc.calculate();
        calc.print();
        sum = calc.GetSum();
        x = sum;

        }
        

}