//Program for addtion of two matrix

#include<stdio.h>
#include<omp.h>
int main()
{
	int i,j;
	int row,col,size;
	printf("Enter no. of rows:");
	scanf("%d",&row);
	printf("\nEnter no. of columns");
	scanf("%d",&col);
	size=row*col;
	int a[row][col],b[row][col],c[row][col];
	printf("\nENter the elements of first matrix:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);		
		}
	}
	printf("\nENter the elements of second matrix:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);		
		}
	}
	#pragma omp parallel for schedule(dynamic) collapse(2)  //here we have to use collapse so that both loop works properly
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n After adding first and second matrix we get:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nc[%d][%d]: %d",i,j,c[i][j]);
		}
	}
}
