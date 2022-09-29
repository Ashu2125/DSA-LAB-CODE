#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,p,q;
    int a[20][20];
    int b[20][20];
    int c[20][20];
    cout<<"Enter the no of rows of 1st array"<<endl;
    cin>>m;
    cout<<"Enter the no of columns of 1st array"<<endl;
    cin>>n;
    cout<<"Enter the no of rows of 2nd array"<<endl;
    cin>>p;
    cout<<"Enter the no of columns of 2nd array"<<endl;
    cin>>q;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        cin>>b[i][j];
    }
    if(m==p && n==q)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=a[i][j] - b[i][j];
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}