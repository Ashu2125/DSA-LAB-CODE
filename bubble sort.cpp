#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    int temp=0;
    int a[100];
    cout<<"enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the element of array "<<endl;
    for(k=0;k<n;k++){
        cin>>a[k];

    }
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-1;j++){
            if(a[j]>a[j+1]){
              temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

        }
        
           }
           
    }   
       
       for(j=0;j<n;j++){
           cout<<a[j];
           
       }

    
return 0;
}