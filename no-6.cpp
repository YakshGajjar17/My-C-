#include <iostream>
using namespace std;

inline int multiply(int a, int b)
{
    return a * b;
}

inline int cube(int num) 
{
    return num * num * num;
}

int main()
 {
    int num1, num2;
    
   cout << "Enter two numbers: ";
   cin >> num1 >> num2;
        
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;
        
    cout << "Cubic value of " << num1 << " is: " << cube(num1) << endl;
    cout << "Cubic value of " << num2 << " is: " << cube(num2) << endl;
    
    return 0;
}

