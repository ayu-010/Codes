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
    
    int XOR1=0;
    int XOR2=0;
    int a[n-1];
  
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }


    cout << "array  is" << endl;
    printArray(a, n - 1);
  cout<<endl;





for(int i=0;i<n-1;i++)
{
    XOR2=XOR2^a[i];
    XOR1=XOR1^(i+1);
}

XOR1=XOR1^n;
int missingNo=XOR1^XOR2;
cout<<"missing no using XOR is"<<missingNo<<endl;

}
//     int Sum1=n*(n+1)/2;
//     cout<<"Sum 1 is"<<Sum1<<endl;
//     int Sum2=0;
//    for(int i=0;i<n-1;i++)
//    {
//     Sum2=Sum2+a[i];
//    }

//   cout<<"Sum2 is"<<Sum2<<endl;
//    int MissingNo=Sum1-Sum2;
//    cout<<"Missing no is"<<MissingNo;

// }
    // int hashArray[n+1]={0};
 
    // for(int i=0;i<n;i++)
    // {
    //   hashArray[a[i]]=1;
    // }


    // for(int i=1;i<=n;i++)
    // {
    //     if(hashArray[i]==0)
    //     {
    //         cout<<"missing no is:"<<i<<endl;
    //     }
    // }

//   int i,flag ;
//     for ( i = 1; i <= n; i++)
//     {
//          flag = 0;
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (a[j] == i)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) // If `i` is not found in the array, print the missing number
//         {
//             cout << "Missing number is: " << i << endl;
//             return 0; // Exit the program as soon as the missing number is found
        // }
    // }






// 1-Brute Force-  through 2 loop 0(n*n) ans space 0(1);
// 2-Better- using hashing 0(N)+0(N)  and space 0(N);
// 3-Optimal-using XOR and SUM
// using SUM 0(2N) and Space 0(1);
// using XOR 0(N) and Space 0(1);
