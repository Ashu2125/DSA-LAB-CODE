#include<stdio.h>
int main()
{
    int a[100];
    int b[100];
    int c[100];
    int i,j,k,n,m;
    printf("Enter the size of 1st array");
    scanf("%d",&m);   printf("Enter the size of 2nd array");
    scanf("%d",&n);
    printf("Enter the elements of 1st array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of 2nd array");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
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
            else if(a[i]>b[j])
            {
                j++;
            }
            else
            {
                i++;
                j++;
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