#include <stdio.h>
void
main ()
{
  int a[100], i, n, c,x, m;
  printf ("enter the number of elements \n");
  scanf ("%d", &n);
  printf ("enter the elements \n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  //printf ("enter the position by which ,u want to remove the element \n");
 // scanf ("%d", &x);
  printf ("enter the element to be remove \n");
  scanf ("%d", &m);
  printf ("entered array is \n");
  for (int i= 0; i< n; i++)
    {
      printf (" %d", a[i]);
         if(a[i]==m)
          {
           c=i;
           }
     }
   printf(" position of the element = %d",c+1);
     for (i = c; i<n-1; i++)
    {
      a[i ] = a[i+1];
    }
  printf (" \n new array \t");
  for (i = 0; i < n-1; i++)
    {
      printf ("%d", a[i]);
      printf("\t");
    }
}