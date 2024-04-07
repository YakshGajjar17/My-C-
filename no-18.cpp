#include <iostream>
using namespace std;

template<typename T>
void bubbleSort(T arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i)
	 {
        for (int j = 0; j < size - i - 1; ++j) 
		{
            if (arr[j] > arr[j + 1])
			 {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template<typename T>
void displayArray(T arr[], int size)
 {
    for (int i = 0; i < size; ++i)
	 {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int intArray[] = {5, 3, 7, 1, 9};
   
    const int size = 5;

    cout << "Integer array before sorting: ";
    displayArray(intArray, size);
    bubbleSort(intArray, size);
    cout << "Integer array after sorting: ";
    displayArray(intArray, size);
   
    return 0;
}

