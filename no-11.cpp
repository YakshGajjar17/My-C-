#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

double subtract(double a, double b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double multiply(double a, double b) 
{
    return a * b;
}

int divide(int a, int b) 
{
    if (b != 0)
        return a / b;
    else
	{
        cerr << "Error: Cannot divide by zero\n";
        return 0;
    }
}

double divide(double a, double b)
 {
    if (b != 0.0)
        return a / b;
    else
	{
        cerr << "Error: Cannot divide by zero\n";
        return 0.0;
    }
}

int main()
 {
    int int1 = 10, int2 = 5;
    double double1 = 10.5, double2 = 2.5;
    
    cout << "Integer Addition: " << add(int1, int2) << endl;
    cout << "Integer Subtraction: " << subtract(int1, int2) << endl;
    cout << "Integer Multiplication: " << multiply(int1, int2) << endl;
    cout << "Integer Division: " << divide(int1, int2) << endl;
    
    cout << "Double Addition: " << add(double1, double2) << endl;
    cout << "Double Subtraction: " << subtract(double1, double2) << endl;
    cout << "Double Multiplication: " << multiply(double1, double2) << endl;
    cout << "Double Division: " << divide(double1, double2) << endl;

    return 0;
}

