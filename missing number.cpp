#include <stdio.h>
void main()
{
    int a[100],i,x,n;
    //input taking
    printf("\n enter the number of elements :");
    scanf("%d",&n);
    printf("\n enter the elements of array :");
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    }
    printf("enter the number to be searched :");
    scanf("%d",&x);
    printf("\n original array :");
    for(int j=0;j <n;j++)
    {
        printf("%d",a[j]);
        printf(" ");
    }
    for(int k=0;k<n;k++)
    {
        if(a[k]==x)
        {
            printf("\n element found at pos:%d",k+1);
        }
    }
}