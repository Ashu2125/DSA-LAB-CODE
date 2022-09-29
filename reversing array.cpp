#include <iostream>

using namespace std;

void reverse(int arr[],int n){
    
    int i=0;
    int j=i+1;
    while(j<n){
        swap(arr[i],arr[j]);
        
        i=i+2;
        j=j+2;
    }
    
}

void printarray(int arr[],int n ){
for(int i=0;i<n;i++){
    cout<< arr[i] <<" ";
} 
    cout<<endl;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int ashu[5]={9,8,7,6,5};
    
    reverse(arr,6);
    reverse(ashu,5);
    
    printarray(arr,6);
    printarray(ashu,5);
    

    return 0;
}