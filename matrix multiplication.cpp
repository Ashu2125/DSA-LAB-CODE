#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,p,q,k;
    int a[10][10];
    int b[10][10];
    int c[10][10];
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
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
        
        for(k=0;k<p;k++)
        {
            c[i][j]+= a[i][k] * b[k][j];
        }
        cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
    
}