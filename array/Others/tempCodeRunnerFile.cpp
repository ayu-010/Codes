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
    cout<<"enter the size of the array"<<endl;
    int n;
    cin >> n;

    int a[n-1];
  
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }


    cout << "array  is" << endl;
    printArray(a, n - 1);
  int i,flag ;
    for ( i = 1; i <= n; i++)
    {
         flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] == 1)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
        return i;
}

// 1-Brute Force  throght sorting (N logn)
// 2-otimal-Traverse Entire array; 0(N)
