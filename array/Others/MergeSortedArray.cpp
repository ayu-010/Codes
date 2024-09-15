#include <iostream>
#include <climits>
using namespace std;

void selectionSort(int a[], int size)
{

    for (int i = 0; i < size-1; i++)
    {

        int min = a[i];
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                minIndex = j;
            }
        }

        int temp=a[i];
        a[i]=min;
        a[minIndex]=temp;
    }
}

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
}
int main()
{
    int a[] = {25, 14, 597, 66};
    int size = sizeof(a) / sizeof(a[0]);

    cout << "array before sorting is" << endl;
    printArray(a, size);

    selectionSort(a, size);
cout<<endl;
    cout << "array after sorting is" << endl;
    printArray(a, size);
}