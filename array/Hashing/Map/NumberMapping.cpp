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
    cout << "enter the size of aaray you want to create"<<endl;
    int size;
    cin >> size;

    int *a = new int[size];
    for (int i = 0; i < size; i++)

    {
        cin >> a[i];
    }

    printArray(a, size);
    cout<<endl;
  
     map<int,int>mpp;
   
    for (int i = 0; i < size; i++)
    {
       mpp[a[i]]++;
    }



    cout << "enter for how many element you want to check ytherir ocurences"<<endl ;
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << " number is ocurred " << mpp[number] << endl;
    }
}