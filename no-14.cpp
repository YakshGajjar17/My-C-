#include <iostream>
using namespace std;

double calculateArea(double radius)
{
    radius * radius;
}

double calculateArea(double length, double width)
{
    return length * width;
}

double calculateArea(double base, double height, char triangle)
{
    return 0.5 * base * height;
}

int main()
 {
    double radius, length, width, base, height;
    
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;
    
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << calculateArea(length, width) << endl;
    
    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << calculateArea(base, height, 'T') << endl;

    return 0;
}

