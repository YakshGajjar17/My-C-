#include <iostream>
using namespace std;

class person
 {
protected:
    string name;
    int age;

public:
    void initialize_person(const string& n, int a) 
	{
        name = n;
        age = a;
    }

    void read_person_data()
	 {
        cout << "Enter name: ";
        getline(cin >> ws, name);
        cout << "Enter age: ";
        cin >> age;
    }

    void display_person_data() const
	 {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public person
 {
private:
    double percentage;

public:
    void initialize_student(double p)
	{
        percentage = p;
    }

    void read_student_data()
	{
        read_person_data();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void display_student_data() const 
	{
        display_person_data();
        cout << "Percentage: " << percentage << endl;
    }
};

class teacher
 {
private:
    double salary;

public:
    void initialize_teacher(double s)
	 {
        salary = s;
    }

    void read_teacher_data()
	 {
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display_teacher_data() const
	 {
        cout << "Salary: " << salary << endl;
    }
};

class faculty : public student, public teacher
 {
public:
    void initialize_data(double p, double s)
	 {
        initialize_student(p);
        initialize_teacher(s);
    }

    void read_data()
	 {
        read_student_data();
        read_teacher_data();
    }

    void display_data() const 
	{
        display_student_data();
        display_teacher_data();
    }
};

int main()
 {
    faculty person1;
    
    cout << "Enter student and teacher data:\n";
    person1.read_data();
    
    cout << "\nStudent and Teacher Data:\n";
    person1.display_data();

    return 0;
}

