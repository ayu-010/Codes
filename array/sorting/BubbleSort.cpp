#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
}
int main()

{
    int a[] = {11,7,3,49,51,6};
    int size = sizeof(a) / sizeof(a[0]);

    cout << "array before sorting is" << endl;
    printArray(a, size);

    cout << endl;
    

    for (int i = size - 1; i >= 1; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                didSwap = 1;
            }
        }

        if(didSwap==0)
        {
            break;
        }
        cout<<" array runs"<<endl;
    }

    cout << "after sorting" << endl;
    printArray(a, size);
}


// TIME COMPLEXITY =0(N^2) in worst and avg case
// TIME COMPLEXITY =0(N) in best case when the array is already sorted
// adjacent swapping