#include <iostream>
using namespace std;

class Number
{
public:
    int num;

public:
    Number(int n) : num(n) {}
    
    friend void swapNumbers(Number& num1, Number& num2);
};

void swapNumbers(Number& num1, Number& num2)
 {
    num1.num = num1.num + num2.num;
    num2.num = num1.num - num2.num;
    num1.num = num1.num - num2.num;
}

int main()
 {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Number num1(x);
    Number num2(y);

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swapNumbers(num1, num2);

    cout << "After swapping: x = " << num1.num << ", y = " << num2.num << endl;

    return 0;
}

