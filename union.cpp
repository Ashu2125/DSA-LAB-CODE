#include<iostream>
using namespace std;
int main()
{ 
    int i,j,m,n;
    int a[100],b[100];
    cout<<"enter the size of 1st array"<<endl;
    cin>>m;
    cout<<"enter the size of 2nd arrray"<<endl;
    cin>>n;
    cout<<"enter the elements of array 1st "<<endl;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }cout<<endl;
    
    cout<<"enter the elements of array 2nd "<<endl;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }cout<<endl;

    

return 0;
}