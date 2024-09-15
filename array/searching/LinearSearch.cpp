#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,55,66,332,55,232,44,78,99};
 int size = sizeof(a) / sizeof(a[0]);
 int key;
 cout<<"enter the key you want to search"<<endl;
 cin>>key;
 for(int i=0;i<size;i++)
 {

    
    if(a[i]==key)

    {
        cout<<"no is found successfull at index no"<<i<<endl;
        return 0;
    }
        
        

 }



        cout<<"no is not found in an array "<<endl;
      
         


}