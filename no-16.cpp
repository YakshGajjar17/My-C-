#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    Number(int n) : num(n) {}

    friend int findMax(const Number& num1, const Number& num2);
};


int findMax(const Number& num1, const Number& num2)
{
    return (num1.num > num2.num) ? num1.num : num2.num;
}

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Number num1(x);
    Number num2(y);

    int maxNumber = findMax(num1, num2);

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}

