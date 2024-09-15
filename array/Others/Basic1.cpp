
#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    // Allocate memory for the dynamic array
    int* arr = new int[size];

    // Input elements into the dynamic array
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Output elements of the dynamic array
    cout << "Array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory used by the dynamic arr
    delete[] arr;

    return 0;
}
