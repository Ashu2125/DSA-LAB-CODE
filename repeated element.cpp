#include <stdio.h>
void main()
{
	int a[100],i,n;
	printf("enter the number of elements :");
	scanf("%d",&n);
	printf("enter the elements :");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("array elements are :");
	for(i=0;i<n;i++)
	{
	    printf(" %d",a[i]);
	}
	for(i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if(a[i]==a[j])
	        {
	            printf("\n repeated element : %d",a[i]);
	        }
	    }
	}
}