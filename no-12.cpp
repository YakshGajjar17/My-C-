#include <iostream>
using namespace std;

class Matrix
 {
private:
    int size;
    int* elements;

public:
    Matrix(int s) : size(s) 
	{
        elements = new int[size];
    }
    
    ~Matrix()
	 {
        delete[] elements;
    }
    
    Matrix operator+(const Matrix& other)
	 {
        if (size != other.size) 
		{
            cout << "Error: Matrices must be of the same size for addition." << endl;
            return Matrix(0);
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i)
		 {
            result.elements[i] = elements[i] + other.elements[i];
        }
        return result;
    }
    
    void setElements(const int* arr) {
        for (int i = 0; i < size; ++i) {
            elements[i] = arr[i];
        }
    }
    
    void display() const
	 {
        for (int i = 0; i < size; ++i) 
		{
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

int main()
 {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;
    
    Matrix matrix1(size);
    Matrix matrix2(size);

    int* arr1 = new int[size];
    int* arr2 = new int[size];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < size; ++i)
	{
        cin >> arr1[i];
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < size; ++i) 
	{
        cin >> arr2[i];
    }
    
    matrix1.setElements(arr1);
    matrix2.setElements(arr2);
    
    Matrix result = matrix1 + matrix2;
    
    cout << "Resultant Matrix after addition:" <<endl;
    result.display();

    delete[] arr1;
    delete[] arr2;

    return 0;
}

