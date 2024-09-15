#include <iostream>
#include <climits>
using namespace std;



void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
}


int second_Largest(int a[],int size)
{  


    
    int largest=a[0];
    int secondLargest=-1;
    // considering there is no negative no in an array

    for(int i=1;i<size;i++)
    {

        if(a[i]>largest)
        {
             secondLargest=largest;
             largest=a[i];
        }

        else if(a[i]>secondLargest  && a[i]<largest)
        {
            secondLargest=a[i];
        }
    } 


    if(secondLargest==-1)
    {
        cout<<"no second largest element found ";
    }

   

    return secondLargest;

}

int second_Smallest(int a[],int size)
{

    int smallest = a[0];
    int secondSmallest = INT_MAX;

    for (int i = 1; i < size; i++)
    {
        if (a[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < secondSmallest)
        {
            secondSmallest = a[i];
        }
    }

    
    if (secondSmallest == INT_MAX)
    {
        return -1;
    }

    return secondSmallest;
}



int bubble_sort(int a[],int size)
{

  for (int i = size - 1; i >= 1; i--)
    {
        
        for (int j = 0; j <= i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {

                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                
            }
        }

       
    }


    for(int i=size-1;i>0;i--)
    {
        if(a[i-1]!=a[i])

        {
            return a[i-1];
            break;
        }
    }
      cout<<"no seond largest found un an array"<<endl;
     return -1;
}


 


int main()
{
    
    int a[]={7,7,7,1,7,7,7};
     int size = sizeof(a) / sizeof(a[0]);
    int max=INT_MIN;
  
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
         
        }
    }

    cout<<"max elelement in  an array is "<<max<<endl;
     
     int secondLargest=INT_MIN;
    for(int j=0;j<size;j++)
    {
        if( a[j]>secondLargest 
      
        && a[j]!=max)
        {
            secondLargest=a[j];
        }
    }
    
    if (secondLargest == INT_MIN)
    {
        cout << "No second largest element found." << endl;
    }
       else
    {
        cout << "Second largest in the array through loop (better approach) is " << secondLargest << endl;
    }

  
     


    //  cout<<"second largest element is"<<bubble_sort(a,size)<<endl;
   
      

     cout<<"second Largest element is"<<second_Largest(a,size)<<endl;
     cout<<"second Smallest element is"<<second_Smallest(a,size)<<endl;
     

}


// 1 BRUTE FORCE=SORTING N(logN)
// 2  BETTER= O(2N) when you traverse 2 times in an array  
//  3 OPTIMAL=0(N) when you travers an array only one time 