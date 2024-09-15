#include <iostream>
#include <vector>
#include <set>
using namespace std;


vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
    set<int> st;
    
    for (int i = 0; i < n; i++) {
        st.insert(arr1[i]);
    }
    

    for (int i = 0; i < m; i++) {
        st.insert(arr2[i]);
    }
    
  
    vector<int> temp;
    for (auto it : st) {
        temp.push_back(it);
    }
    
    return temp;
}

void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, m;

    
    cout << "Enter size of first array: ";
    cin >> n;
    int arr1[n];

   
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

  
    cout << "Enter size of second array: ";
    cin >> m;
    int arr2[m];

    
    cout << "Enter elements of second array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

   
    vector<int> unionArray = findUnion(arr1, arr2, n, m);

   
    cout << "Union of two arrays: ";
    printArray(unionArray);

    return 0;
}
