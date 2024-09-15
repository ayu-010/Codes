#include <iostream>
using namespace std;

// Function to rotate an array by d elements in counter-clockwise direction.
void rotateArr(int arr[], int d, int n) {
    d = d % n;  
    
    int temp[d]; 
    
    
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    
   
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    
    
    for (int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }
}




void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int a[], int start,int end) {
     start = start;
     end = end - 1;

    while (start <= end) {
     
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
}
int main() {
    int n, d;
    
 
    cout << "Enter the size of the array: ";
    cin >> n;
    
   
    int arr[n];
    

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    
    cout << "Enter the number of rotations: ";
    cin >> d;
    

    d=d%n;
   
    rotateArr(arr, d, n);
    

    // reverseArray(arr,0,d);
    // reverseArray(arr,d,n);
    // reverseArray(arr,0,n);

   
    cout << "Rotated array: ";
    printArray(arr, n);
    
    return 0;
}



// Time complexity=0(n+d);
// Extra space=0(d); 



// when we are roating using reversing
//  Time complexity=0(2n);
// Extra space=0(1); 