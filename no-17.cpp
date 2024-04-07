#include <iostream>
using namespace std;

template<typename T>
void swapValues(T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
 {
    int int1 = 5, int2 = 10;
   
    swapValues(int1, int2);
    cout << "After swapping integers: int1 = " << int1 << ", int2 = " << int2 << endl;
    
    return 0;
}

