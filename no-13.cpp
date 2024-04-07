#include <iostream>
using namespace std;

class MyString 
{
private:
    char* buffer;

public:
    
    MyString(const char* initialString = "") 
	{
        if (initialString != nullptr)
		{
            buffer = new char[strlen(initialString) + 1];
            strcpy(buffer, initialString);
        }
		 else 
		{
            buffer = new char[1];
            buffer[0] = '\0';
        }
    }
    
    ~MyString()
	{
        delete[] buffer;
    }
    
    MyString operator+(const MyString& other) const
	 {
        int newLength = strlen(buffer) + strlen(other.buffer) + 1;
        char* newBuffer = new char[newLength];
        strcpy(newBuffer, buffer);
        strcat(newBuffer, other.buffer);
        MyString temp(newBuffer);
        delete[] newBuffer;
        return temp;
    }
    
    void display() const 
	{
        cout << buffer;
    }
};

int main()
 {
    MyString string1("Hello, ");
    MyString string2("world!");
    
    MyString result = string1 + string2;
    
    cout << "Concatenated string: ";
    result.display();
    cout << endl;

    return 0;
}

