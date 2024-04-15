#include <iostream>
#include<string>

using namespace std;


class Calculator 
{
private:
    double x;
    char oper;
    double y;
    double sum;

public:
    Calculator(double x_val, char oper_val, double y_val,double sum_val);
    void calculate();
    void print();
    double GetSum();
};
