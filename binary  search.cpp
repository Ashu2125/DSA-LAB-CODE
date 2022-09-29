#include<iostream>
using namespace std;

bool bsearch(int a[],int x,int l,int h){

int mid=(l+h)/2;

while(l<=h)
{
 if(x>a[mid])
 {
    l=mid+1;
  return bsearch( a, x, l, h);
 }
 else if(x<a[mid])
 {
   h=mid-1;
return bsearch( a, x, l, h);
 }
 else if(x==a[mid])
 {
  return 1;
  

 }
}return 0;


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

   if(bsearch(a,x,l,h)){
    cout<<"element found"<<endl;

   }
   else{
       cout<<"element not found "<<endl;
       
   }

return 0;
}