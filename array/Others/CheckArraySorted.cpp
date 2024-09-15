#include <iostream>
using namespace std;

int main() 
{
    int arr[] = {1, 1, 3, 4, 5}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Loop to check if the array is sorted
    for (int i = 1; i < size; i++) 
    {
        if (arr[i-1] <= arr[i]) 
        {
           
        }

        else{
            cout<<" not sorted";
            return 0;
        }
    }

    cout << "sorted" << endl;

}
