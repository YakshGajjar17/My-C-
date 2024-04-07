#include <iostream>
using namespace std;

class Students
 {
protected:
    int rollNumber;

public:
    void setRollNumber(int roll)
	 {
        rollNumber = roll;
    }

    int getRollNumber() const 
	{
        return rollNumber;
    }
};

class Test : public Students 
{
protected:
    int subject1Marks;
    int subject2Marks;

public:
    void setMarks(int marks1, int marks2) 
	{
        subject1Marks = marks1;
        subject2Marks = marks2;
    }

    int getSubject1Marks() const
	 {
        return subject1Marks;
    }

    int getSubject2Marks() const
	{
        return subject2Marks;
    }
};

class Result : public Test
 {
public:
    int calculateTotalMarks() const 
	{
        return getSubject1Marks() + getSubject2Marks();
    }

    void displayResult() const 
	{
        cout << "Roll Number: " << getRollNumber() << endl;
        cout << "Subject 1 Marks: " << getSubject1Marks() << endl;
        cout << "Subject 2 Marks: " << getSubject2Marks() << endl;
        cout << "Total Marks: " << calculateTotalMarks() << endl;
    }
};

int main() 
{
    Result studentResult;
    
    studentResult.setRollNumber(101);

    studentResult.setMarks(85, 90);

    studentResult.displayResult();

    return 0;
}

