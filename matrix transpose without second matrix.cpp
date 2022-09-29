#include <stdio.h>
#define size 5
void initialisation(int a[][size],int row,int col)
{
    
    printf("\n\n");
    printf("ENTER ELEMENTS OF ARRAY:\n");
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
}
void print(int a[][size], int row, int col)
{
    int i, j, l;
    printf("\n\n------");
    for (l = 1; l < col; l++)
    {
        printf("-----");
    }
    for (i = 0; i < row; i++)
    {
        printf("\n|");
        for (j = 0; j < col; j++)
        {
            printf("%-2d  |", a[i][j]);
        }
        printf("\n------");
        for (l = 1; l < col; l++)
        {
            printf("-----");
        }
    }
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void transpose(int a[][size],int row,int col)
{
    int i,j;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if (i+j<i+i)
                swap(&a[j][i],&a[i][j]);
        }
    }
}

int main()
{
    int a[size][size],row,col;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&row);
    printf("ENTER NUMBER OF COLUMNS:");
    scanf("%d",&col);
    initialisation(a,row,col);

    printf("ENTERED ELEMENTS:");
    print(a,row,col);

    transpose(a,row,col);
    printf("\n\nMATRIX AFTER TRANSPOSE: ");
    print(a,col,row);

    return 0;
}