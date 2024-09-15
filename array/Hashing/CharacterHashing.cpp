#include <bits/stdc++.h>
using namespace std;



int main()
{
    cout << "Enter the string (only lowercase letters):" << endl;
    string s;
    cin >> s;

    int hashh[26] = {0};

   
    for (int i = 0; i < s.size(); i++)
    {
        
            hashh[s[i] - 'a']++;
       
    }

    cout << "Enter how many elements you want to check their occurrences:" << endl;
    int q;
    cin >> q;

    while (q--)
    {
        char c;
        cin>>c;
        
            cout << hashh[c - 'a']<<endl;
    return 0;
}

}