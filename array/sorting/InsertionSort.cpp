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
    int a[] = {23,44,32,11,344,2,1,55};
    int size = sizeof(a) / sizeof(a[0]);

    cout << "array before sorting is" << endl;
    printArray(a, size);

    cout << endl;
    

    for (int i = 0; i<size; i++)
    {
       int j=i;
             while(j>0 && a[j-1]>a[j])
             {
                int temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
                j--;
             }
             
    }

    cout << "after sorting" << endl;
    printArray(a, size);
}


// TIME COMPLEXITY =0(N^2) in worst and avg case
// TIME COMPLEXITY =0(N) in best case when the array is already sorted