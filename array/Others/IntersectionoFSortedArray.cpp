#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
}


{
 for (int i = size - 1; i >= 1; i--)
    {
        
        for (int j = 0; j <= i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
        
            }
        }

       
    }

}
int main()

{
    int a[] = {23,4,32,11,41,20,1,55,85};
    int size = sizeof(a) / sizeof(a[0]);

    cout << "array  is" << endl;
    printArray(a, size);

    cout << endl;
    
     int max=INT_MIN;
    for (int i = 0; i<size; i++)
    {

if(a[i]>max)
{
    max=a[i];
}

    }

    cout << "largest eleemnt in an array is   " <<max<< endl;


    cout<<"array after sorting is "<<endl;
    bubbleSort(a,size);
    printArray(a, size);
    cout<<endl;

    cout<<"largest element int the array is "<<a[size-1]<<endl;
}



// 1-Brute Force  throght sorting (N logn)
// 2-otimal-Traverse Entire array; 0(N)



