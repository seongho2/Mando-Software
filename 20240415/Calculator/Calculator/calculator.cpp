#include "calculator.h"

Calculator::Calculator(double x_val, char oper_val, double y_val,double sum_val) 
{
    x = x_val;
    oper = oper_val;
    y = y_val;
    sum = sum_val;
}

void Calculator::calculate() 
{
    switch (oper) {
    case '+':
        sum = x + y;
        break;
    case '-':
        sum = x - y;
        break;
    case '*':
        sum = x * y;
        break;
    case '/':
        if (y != 0)
            sum = x / y;
        else
            cout << "Error" << endl;
        break;
    default:
        cout << "잘못된 연산자" << endl;
        break;
    }
}
void Calculator::print() 
{
    std::cout << "계산 결과: " << x << " " << oper << " " << y << " = " << sum << std::endl;
}
double Calculator::GetSum()
{
    return sum;
}