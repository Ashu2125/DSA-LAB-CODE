#include<iostream>
using namespace std;
int main()
{
    int n,m,j,i,k;
    int a[50];
    int b[50];
    int c[50];
    cin>>n; 
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n;j++)
    {
        cin>>b[j];
    }
    i=j=k=0;
    while(i<m && j<n)
    {
    
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
            else
            {
                c[k]=b[j];
                j++;
                k++;
            }
    }
            while(i<m)
            {
                c[k]=a[i];
                i++;
                k++;
            }
    
            while(j<n)
            {
                c[k]=b[j];
                j++;
                k++;
            }
            for(int x=0;x<k;x++)
            {
            printf("%d",c[x]);
            }
        
        return 0;
}