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

    int hash[10] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[a[i]] += 1;
    }
    cout << "enter for how many element you want to check ytherir ocurences"<<endl ;
    int q;
    cin >> q;
    while (q--)
    {
        int number;

        cout << "number of which you want to check occurence"<< endl;
        cin >> number;
        cout << " number is ocurred " << hash[number] << endl;
    }
}