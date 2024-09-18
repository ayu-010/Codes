#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& a) {
    int count = 0;
    int maxCount = 0;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }
    
    return maxCount;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> a(n);
    
    cout << "Enter the elements (0 or 1): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int result = findMaxConsecutiveOnes(a);
    
    cout << "Maximum consecutive ones: " << result << endl;
    
    return 0;
}
