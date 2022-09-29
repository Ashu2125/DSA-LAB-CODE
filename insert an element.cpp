#include <stdio.h>
void main()
{
    int a[100],i,n,x,m;
	printf("enter the number of elements \n");
	scanf("%d",&n);
	printf("enter the elements \n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	} 
	printf("enter the position at which u want to add the element \n");
	scanf("%d",&x);
	printf("enter the element to be added \n");
	scanf("%d",&m);
	for(int j=n;j>=x;j--)
	{
	    a[j]=a[j-1];
	}
	a[x-1]=m;
	n++;
	int z=0;
	printf("new array \n");
	for(z=0;z<n;z++)
	{
	    printf("%d",a[z]);
	}
}