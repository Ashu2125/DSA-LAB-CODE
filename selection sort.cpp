#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int i,j,n;
    cout<<"enter the size of array"<<endl;

    cin>>n;
    cout<<"enter the elements of array"<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        int minindex=i;
      for(j=i+1;j<n;j++)
      {
        if(arr[j]<arr[minindex])
        
        {
          int x=arr[minindex];
          arr[minindex]=arr[j];
          arr[j]=x;
        }
      }
    }
  
     cout<<"sorted array is"<<endl;
     for(i=0;i<n;i++)
     {
      cout<<arr[i];   
     }
    
return 0;
}