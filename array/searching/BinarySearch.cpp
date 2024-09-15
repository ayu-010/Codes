#include<iostream>
using namespace std;

int binarySearch(int a[],int size,int key)
{

     int start=0;
     int end=size-1;

  while(start<=end)
  {

    int mid=(start+end)/2;
   


    if(a[mid]==key)
    {
        cout<<"no is found at index"<<mid<<"and the key that was searched is "<<a[mid];
        return 0;
    }

    else if(a[mid]>key)
    {
        end=mid-1;
    }

    else{
        start=mid+1;
    }


  }
cout<<"not not found in an araay"<<endl;

}
int main()
{
    int a[]={2,4,55,66,332,44,78};
 int size = sizeof(a) / sizeof(a[0]);
 int key;
 cout<<"enter the key you want to search"<<endl;
 cin>>key;
 
 binarySearch(a,size,key);
      
         


}