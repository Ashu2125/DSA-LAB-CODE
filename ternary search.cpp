#include<iostream>
using namespace std;

int ternarysearch(int a[],int x,int l,int h)
{

while(l<=h)
{
    
    int mid1=l+(h-l)/3;
    int mid2=h-(h-l)/3;
    
    
 if(x==a[mid1])
 {
    
  return 1;
 }
 if(x==a[mid2])
 {
  
  return 1;

 }
 else if(x<a[mid1])
 {
  h=mid1-1;
   return ternarysearch(a,x,l,mid1-1);
  
 }
 else if(x>a[mid2])
 {
    l=mid2+1;
  return ternarysearch(a,x,mid2+1,h);
 } 
 else{
     return ternarysearch(a,x,mid1+1,mid2-1);
 }
}

return 0;


}
int main()
{
    int a[100],i,j,l,h,n,x;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    cout<<"enter the element of array "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    l=0;
    h=n-1;
    cout<<"enter the elememt to search "<<endl;
    cin>>x;

   if(ternarysearch(a,x,l,h)){
    cout<<"element found"<<endl;

   }
   else{
       cout<<"element not found "<<endl;
       
   }

return 0;
}