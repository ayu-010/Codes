#include <bits/stdc++.h>
using namespace std;

 void removeDuplicate(int a[],int size)
 {
    int* mark = new int[size]; 
    for (int i = 0; i < size; i++) {
        mark[i] = 1;
    }

    for(int i=0;i<size;i++)
    {    
         if(mark[i]==1)
         {

        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
               mark[j]=0;
            }
        }
         }
    }

    for(int i=0;i<size;i++)
    {
        if(mark[i]==1)
        {
            cout<<a[i]<<" ";
        }
    }
       delete[] mark;
 }
  

void removeDuplicate2(int a[],int size)
  {
     int i=0; 
     for(int j=1;j<size;j++)
     {
        if(a[j]!=a[i])
        {
            a[i+1]=a[j];
            i++;
        }
     }


     for(int j=0;j<i+1;j++)
     {
        cout<<a[j]<<endl;
     }
 
     
  }
void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << "  ";
    }
}
int main() {
    int a[] = {1,2,2,3,4,4};
    int size = sizeof(a) / sizeof(a[0]);
    set<int> st;
   

    removeDuplicate2(a,size);
   
    for (int i = 0; i < size; i++) {
        st.insert(a[i]);
    }
     
   
    int index = 0;
    for (auto it : st) {
        a[index] = it;
        index++;
    }

    size = st.size();
    cout<<"no of uniques element is "<<size<<endl;
   
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
  
  
 
   
    return 0;
}



// BRUTE FORCE-USING SET =TIME COMPLEXITY  set=NlogN + o(N)
                                         // total=2NlogN;

// 2 pointer apprach for optmial approach=0(N);
