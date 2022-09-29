#include<iostream>
#include<cmath>
using namespace std;

int jumpsearch(int a[],int x,int n )
{
   int m=sqrt(n);
     int i=0;
    
       while( a[i]<x && i<n)
    {   
        i=i+m-1;
        if(i>n-1)
        {
            return -1;
        }
    }
        if(a[i]==x)
        {
            return 1;
        }
      else{
        for(int j=i-m+1;j<i-1;j++)
        {
           if(x==a[j])
           return 1;

        }
       }
       
        
       
    return -1;
    
}

int main()
{

    int a[10];
    int i,j,n,m,x;
    cout<<"enter the size of array"<<endl;

    cin>>n;
    cout<<"enter the elements of array"<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to search"<<endl;
    cin>>x;

   int count=jumpsearch(a,x,n);
    if (count==1)
    {
        cout<<"element found"<<endl;
    }
    
    else
    {
        cout<<"element not found"<<endl;
        
    }

return 0;
}