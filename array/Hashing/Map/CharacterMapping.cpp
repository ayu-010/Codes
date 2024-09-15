#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Input string
    cout << "Enter your string: ";
    string s;
    cin >> s;

    // Print size of the string
    cout << "Size of string is: " << s.size() << endl;

    // Initialize a map to count character frequencies
    map<char, int> mpp;

    // Iterate through the string and count each character's frequency
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    // Ask for the number of queries
    cout << "Enter the number of characters for which you want to see the frequency: "; // Add semicolon here
    int q;
    cin >> q;

    // Process each query
    while (q--)
    {
        char c;
        cin >> c;

        // Output the frequency of the queried character
        cout << mpp[c] << endl;
    }

    return 0;
}
