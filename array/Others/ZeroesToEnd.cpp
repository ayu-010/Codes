#include <iostream>
using namespace std;


void bubbleSort(int a[], int size) {
    for (int i = size - 1; i >= 1; i--) {
        for (int j = 0; j <= i - 1; j++) {
        
            if (a[j + 1] >a[j]) {  
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}


void  zeroAtEnd(int a[],int size)
{
    int j=-1;
    for(int i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            j=i;
            break;
        }
    }
     if(j==-1)
     {
        cout<<"no zeroes there";
        
     }

    for(int i=j+1;i<size;i++)
    {
        if(a[i]!=0)
        
        {
        
           int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
                        j++;

        }

       
       
    }
}


void zeroAtEndSecond(int a[],int size)
{
   int i=0;
   int j=0;
   while(i<size)
   {
    if(a[i]!=0)
    {
        a[j]=a[i];
        j++;
    }
    i++;
   }

   while(j<size)
   {
    a[j]=0;
    j++;
   }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}




int main() {
   
    
   
    int arr[]={2,0,0,0,0,0,0,2,6};
    
    
    
    int size=sizeof(arr)/sizeof(arr[0]);


//    printArray(arr,size);

//    bubbleSort(arr,size);
//    printArray(arr,size);
   

//    zeroAtEnd(arr,size);
   zeroAtEndSecond(arr,size);
   printArray(arr,size);

  
    

   

   
   
    
    return 0;
}



