#include <iostream>
using namespace std;

class Calculator 
{
public:
    float add(float a, float b)
	 {
        return a + b;
    }

    float subtract(float a, float b)
	 {
        return a - b;
    }

    float multiply(float a, float b)
	 {
        return a * b;
    }

    float divide(float a, float b)
	 {
        if (b != 0)
            return a / b;
        else {
            std::cerr << "Error: Cannot divide by zero\n";
            return 0;
        }
    }
};

int main()
 {
    Calculator calc;

    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    float result;
    switch (op) 
	{
        case '+':
            result = calc.add(num1, num2);
            break;
        case '-':
            result = calc.subtract(num1, num2);
            break;
        case '*':
            result = calc.multiply(num1, num2);
            break;
        case '/':
            result = calc.divide(num1, num2);
            break;
        default:
            std::cerr << "Error: Invalid operator\n";
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

